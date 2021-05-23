/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface TVRCButton : NSObject

{
    _Bool _enabled;
    _Bool _hasTapAction;
    long long _buttonType;
    NSDictionary *_properties;
}

@property (nonatomic, readonly) long long buttonType;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) _Bool hasTapAction;
@property (copy, nonatomic, readonly) NSDictionary *properties;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isMediaButtonEvent:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setEnabled:(_Bool)arg1;
- (id)_initWithButtonType:(long long)arg1 hasTapAction:(_Bool)arg2 properties:(id)arg3;
- (id)_initWithButtonType:(long long)arg1;
- (_Bool)isEqualToButton:(id)arg1;

@end
