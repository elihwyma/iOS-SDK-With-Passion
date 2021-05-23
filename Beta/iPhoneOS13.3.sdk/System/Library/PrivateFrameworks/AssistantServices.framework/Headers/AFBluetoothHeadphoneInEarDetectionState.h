/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@interface AFBluetoothHeadphoneInEarDetectionState : NSObject <Swift>

{
    _Bool _isEnabled;
    long long _primaryEarbudSide;
    long long _primaryInEarStatus;
    long long _secondaryInEarStatus;
}

@property (nonatomic, readonly) _Bool isEnabled;
@property (nonatomic, readonly) long long primaryEarbudSide;
@property (nonatomic, readonly) long long primaryInEarStatus;
@property (nonatomic, readonly) long long secondaryInEarStatus;

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
- (id)initWithIsEnabled:(_Bool)arg1 primaryEarbudSide:(long long)arg2 primaryInEarStatus:(long long)arg3 secondaryInEarStatus:(long long)arg4;

@end
