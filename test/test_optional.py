from pybindexample import create

class TestOptional:
    def test_type_error(self):
        try:
            create()
        except TypeError as e:
            pass
        except Exception as e:
            raise ValueError("should have raised a typeerror!", e)
    
    def test_false(self):
        assert create(False) is None

    def test_true(self):
        assert create(True) == "Godzilla"