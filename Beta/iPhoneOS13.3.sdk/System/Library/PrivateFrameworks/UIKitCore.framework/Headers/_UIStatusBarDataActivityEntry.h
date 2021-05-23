/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDataEntry.h>

@class NSString;

@interface _UIStatusBarDataActivityEntry : _UIStatusBarDataEntry

{
    long long _type;
    NSString *_displayId;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *displayId;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_ui_descriptionBuilder;

@end
