/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDBlock.h>

@class NSMutableArray, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDParagraph : WDBlock

{
    WDParagraphProperties *mProperties;
    NSMutableArray *mRuns;
    unsigned long long identifier;
}

@property unsigned long long identifier;

- (id)description;
- (_Bool)isEmpty;
- (id)properties;
- (void)clearProperties;
- (id)initWithText:(id)arg1;
- (id)addAnnotation:(int)arg1;
- (id)addBookmark;
- (_Bool)isTextFrame;
- (unsigned long long)runCount;
- (id)runAt:(unsigned long long)arg1;
- (int)blockType;
- (_Bool)isContinuationOf:(id)arg1;
- (id)runs;
- (id)addBookmark:(id)arg1 type:(int)arg2;
- (void)removeLastCharacter:(unsigned short)arg1;
- (id)addCharacterRun;
- (void)addRun:(id)arg1;
- (id)addSpecialCharacter;
- (id)addSymbol;
- (id)addFootnote;
- (id)addEndnote;
- (id)addFieldMarker;
- (id)addAnnotation:(int)arg1 atIndex:(unsigned long long)arg2;
- (id)addHyperlinkFieldMarker;
- (id)initWithText:(id)arg1 string:(id)arg2;
- (void)insertRun:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeRun:(id)arg1;
- (void)clearRuns;
- (id)addDateTime:(id)arg1;
- (id)addMath:(id)arg1;
- (float)maxReflectionDistance;
- (id)runIterator;
- (id)newRunIterator;
- (id)addFieldMarker:(int)arg1;
- (id)addHyperlinkFieldMarker:(int)arg1;

@end
