/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <ToneKit/TKTonePickerItem.h>

@interface TKToneClassicsPickerItem : TKTonePickerItem

{
    long long _classicToneIndex;
}

@property (nonatomic, setter=_setClassicToneIndex:) long long classicToneIndex;
@property (nonatomic, readonly) TKTonePickerItem *parentItem;

- (id)childItemAtIndex:(long long)arg1;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;

@end
