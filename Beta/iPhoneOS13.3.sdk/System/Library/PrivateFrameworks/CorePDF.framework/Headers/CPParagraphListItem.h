/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPList;

__attribute__((visibility("hidden")))
@interface CPParagraphListItem : NSObject

{
    CPList *list;
    int number;
    struct __CFArray *paragraphs;
}

@property (retain, nonatomic) CPList *list;
@property (nonatomic) int number;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (unsigned int)paragraphCount;
- (id)paragraphAtIndex:(unsigned int)arg1;
- (void)addParagraph:(id)arg1;

@end
