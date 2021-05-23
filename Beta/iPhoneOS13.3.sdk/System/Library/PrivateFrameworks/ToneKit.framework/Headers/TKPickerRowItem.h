/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <ToneKit/TKPickerItem.h>

@interface TKPickerRowItem : TKPickerItem

{
    long long _row;
}

@property (nonatomic, setter=_setRow:) long long row;

- (void)_appendDescriptionOfAttributesToString:(id)arg1;

@end
