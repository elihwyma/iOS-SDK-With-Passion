/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataBoolEntry : _UIStatusBarDataEntry

{
    _Bool _boolValue;
}

@property (nonatomic) _Bool boolValue;

+ (_Bool)supportsSecureCoding;
+ (id)entryWithBoolValue:(_Bool)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_ui_descriptionBuilder;
- (id)initFromData:(const CDStruct_0942cde0 *)arg1 type:(int)arg2 boolValue:(_Bool)arg3;

@end
