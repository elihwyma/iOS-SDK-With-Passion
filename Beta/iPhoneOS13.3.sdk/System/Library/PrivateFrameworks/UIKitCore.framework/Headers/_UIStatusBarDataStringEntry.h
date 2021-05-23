/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDataEntry.h>

@class NSString;

@interface _UIStatusBarDataStringEntry : _UIStatusBarDataEntry

{
    NSString *_stringValue;
}

@property (copy, nonatomic) NSString *stringValue;

+ (_Bool)supportsSecureCoding;
+ (id)entryWithStringValue:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_ui_descriptionBuilder;
- (id)initFromData:(const CDStruct_0942cde0 *)arg1 type:(int)arg2 string:(const char *)arg3 maxLength:(int)arg4;

@end
