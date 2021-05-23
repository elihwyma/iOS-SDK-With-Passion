/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDataIntegerEntry.h>

@interface _UIStatusBarDataNetworkEntry : _UIStatusBarDataIntegerEntry

{
    _Bool _lowDataModeActive;
    long long _status;
}

@property (nonatomic) long long status;
@property (nonatomic) _Bool lowDataModeActive;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_ui_descriptionBuilder;

@end
