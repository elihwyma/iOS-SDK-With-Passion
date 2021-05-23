/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HUQuickControlWheelPickerViewItem : NSObject

{
    _Bool _isSelected;
    id _value;
    NSString *_text;
}

@property (copy, nonatomic, readonly) id value;
@property (copy, nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) _Bool isSelected;

- (_Bool)isEqual:(id)arg1;
- (id)initWithHFTVInputControlItemValue:(id)arg1;
- (id)initWithHFMultiStateControlItemValue:(id)arg1 text:(id)arg2 isSelected:(_Bool)arg3;

@end
