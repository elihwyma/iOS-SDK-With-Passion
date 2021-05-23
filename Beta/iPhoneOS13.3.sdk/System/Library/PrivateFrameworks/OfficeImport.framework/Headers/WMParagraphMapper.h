/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class OIXMLElement, WDParagraph;

__attribute__((visibility("hidden")))
@interface WMParagraphMapper : CMMapper

{
    WDParagraph *wdParagraph;
    OIXMLElement *mActiveNode;
    _Bool mIsDeleted;
}

+ (void)mapPlaceholderAt:(id)arg1 rect:(struct CGRect)arg2 withState:(id)arg3;

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)activeNode;
- (void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3;
- (void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3;
- (id)runAtIndex:(unsigned long long)arg1;
- (_Bool)isTextFrame;
- (_Bool)containsOfficeArt;
- (void)mapParagraphBodyWithState:(id)arg1;
- (_Bool)isCollapsable:(id)arg1;
- (id)initWithBlock:(id)arg1 parent:(id)arg2;

@end
