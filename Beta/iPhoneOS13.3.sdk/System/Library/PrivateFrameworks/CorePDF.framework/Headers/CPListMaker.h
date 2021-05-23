/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPLayoutArea, CPList, NSArray;

__attribute__((visibility("hidden")))
@interface CPListMaker : NSObject

{
    CPLayoutArea *area;
    NSArray *spacers;
    unsigned int textLineCount;
    id *textLines;
    CPList *list;
}

+ (void)makeListsInPage:(id)arg1;
+ (void)makeListsInLayoutArea:(id)arg1;
+ (void)makeListsInChunk:(id)arg1;

- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (void)fetchTextLine:(id)arg1;
- (void)makeListItemFrom:(struct CPListInfo *)arg1 stopAt:(unsigned int)arg2;
- (_Bool)makeListFrom:(struct CPListInfo *)arg1;
- (void)fetchTextLinesInColumn:(id)arg1;
- (void)makeListsInColumn:(id)arg1;
- (id)initWithLayoutArea:(id)arg1;
- (void)makeLists;

@end
