/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@interface AFAccessibilityState : NSObject <Swift>

{
    long long _isVoiceOverTouchEnabled;
    long long _isVibrationDisabled;
}

@property (nonatomic, readonly) long long isVoiceOverTouchEnabled;
@property (nonatomic, readonly) long long isVibrationDisabled;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (id)initWithIsVoiceOverTouchEnabled:(long long)arg1 isVibrationDisabled:(long long)arg2;

@end
