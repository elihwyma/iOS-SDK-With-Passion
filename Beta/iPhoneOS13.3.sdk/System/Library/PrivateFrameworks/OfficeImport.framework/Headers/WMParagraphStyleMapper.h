/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class WDParagraph, WDParagraphProperties, WMParagraphStyle;

__attribute__((visibility("hidden")))
@interface WMParagraphStyleMapper : CMMapper

{
    WDParagraphProperties *wdParaProperties;
    WDParagraph *wdParagraph;
    WMParagraphStyle *mStyle;
}

- (_Bool)isListItem;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithWDParagraph:(id)arg1 parent:(id)arg2 isInTextFrame:(_Bool)arg3;
- (void)mapListStyleFromParagraphStyleWithState:(id)arg1;
- (void)mapParagraphStyle;
- (void)mapListStyleAt:(id)arg1 state:(id)arg2;
- (void)mapParagraphProperties;
- (void)destyleEmptyParagraph;
- (_Bool)getListLevel:(char *)arg1 andListIndex:(int *)arg2 fromStyleOnly:(_Bool)arg3;
- (_Bool)checkListId:(long long)arg1 level:(unsigned char)arg2;
- (void)updateOutlineStateWithListId:(int)arg1 listLevel:(unsigned char)arg2 document:(id)arg3 state:(id)arg4;
- (void)mapBulletAt:(id)arg1 forIndex:(int)arg2 inLevelDescription:(id)arg3 listState:(id)arg4;
- (void)getListLevel:(char *)arg1 andListIndex:(int *)arg2 foundListLevel:(_Bool *)arg3 foundListIndex:(_Bool *)arg4 fromStyle:(id)arg5;
- (void)getListLevel:(char *)arg1 andListIndex:(int *)arg2 foundListLevel:(_Bool *)arg3 foundListIndex:(_Bool *)arg4 fromParagraphProperties:(id)arg5;
- (void)mapStyleFromListId:(int)arg1 listLevel:(unsigned char)arg2 document:(id)arg3 state:(id)arg4;
- (void)mapBulletFromListId:(int)arg1 listLevel:(unsigned char)arg2 at:(id)arg3 document:(id)arg4 state:(id)arg5;
- (id)bulletLabelForIndex:(int)arg1 inLevelDescription:(id)arg2 listState:(id)arg3;
- (id)labelStringWithGap:(id)arg1;

@end
