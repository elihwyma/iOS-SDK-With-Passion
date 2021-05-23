/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <Foundation/NSObject.h>

@interface TKPickerItem : NSObject

{
    long long _section;
}

@property (nonatomic, setter=_setSection:) long long section;

- (id)description;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (void)_appendDescriptionOfAttributeNamed:(id)arg1 withStringValue:(id)arg2 toString:(id)arg3;
- (void)_appendDescriptionOfAttributeNamed:(id)arg1 withIntegerValue:(long long)arg2 toString:(id)arg3;
- (void)_appendDescriptionOfAttributeNamed:(id)arg1 withBoolValue:(_Bool)arg2 toString:(id)arg3;

@end
