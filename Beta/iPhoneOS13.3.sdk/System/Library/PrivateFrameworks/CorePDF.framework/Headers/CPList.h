/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPParagraphListItem;

__attribute__((visibility("hidden")))
@interface CPList : NSObject

{
    struct CGRect spacer;
    int type;
    unsigned int ordinalPrefixLength;
    unsigned int ordinalSuffixLength;
    CPParagraphListItem *parentItem;
    struct __CFArray *items;
}

@property (nonatomic) struct CGRect spacer;
@property (nonatomic) int type;
@property (nonatomic) unsigned int ordinalPrefixLength;
@property (nonatomic) unsigned int ordinalSuffixLength;
@property (retain, nonatomic) CPParagraphListItem *parentItem;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)addItem:(id)arg1;
- (unsigned int)itemCount;
- (id)itemAtIndex:(unsigned int)arg1;
- (void)dispose;
- (_Bool)containsParagraph:(id)arg1;
- (_Bool)isMultilevel;

@end
