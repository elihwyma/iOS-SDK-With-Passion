//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HUQuickControlWheelPickerViewItem : NSObject
{
    BOOL _isSelected;
    id _value;
    NSString *_text;
}

@property(readonly, nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) id value; // @synthesize value=_value;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithHFMultiStateControlItemValue:(id)arg1 text:(id)arg2 isSelected:(BOOL)arg3;
- (id)initWithHFTVInputControlItemValue:(id)arg1;

@end

