/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, WDDocument, WDTableCell;

__attribute__((visibility("hidden")))
@interface WDText : NSObject

{
    NSMutableArray *mBlocks;
    int mTextType;
    WDDocument *mDocument;
    WDTableCell *mTableCell;
}

@property (weak, readonly) WDDocument *document;
@property (weak, readonly) WDTableCell *tableCell;

- (id)description;
- (_Bool)isEmpty;
- (id)blocks;
- (id)content;
- (id)paragraphs;
- (void)addBlock:(id)arg1;
- (unsigned long long)blockCount;
- (id)blockAt:(unsigned long long)arg1;
- (id)addParagraph;
- (int)textType;
- (void)removeLastCharacter:(unsigned short)arg1;
- (void)removeLastBlock;
- (int)tableNestingLevel;
- (id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3;
- (id)initWithDocument:(id)arg1 textType:(int)arg2;
- (id)blockIterator;
- (id)newBlockIterator;
- (id)runIterator;
- (id)newRunIterator;
- (unsigned long long)indexOfBlock:(id)arg1;
- (id)addParagraphAtIndex:(int)arg1;
- (id)firstParagraph;
- (id)addTableAtIndex:(int)arg1;
- (id)lastBlock;
- (id)addTable;

@end
