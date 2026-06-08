import XCTest
import SwiftTreeSitter
import TreeSitterCddl

final class TreeSitterCddlTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_cddl())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading CDDL grammar")
    }
}
