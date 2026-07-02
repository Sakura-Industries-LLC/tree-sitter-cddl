import io.github.treesitter.jtreesitter.Language;
import io.github.treesitter.jtreesitter.cddl.TreeSitterCddl;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertDoesNotThrow;

public class TreeSitterCddlTest {
    @Test
    public void testCanLoadLanguage() {
        assertDoesNotThrow(() -> new Language(TreeSitterCddl.language()));
    }
}
