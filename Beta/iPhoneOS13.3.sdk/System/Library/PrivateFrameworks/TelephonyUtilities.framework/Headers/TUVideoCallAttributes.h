/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@interface TUVideoCallAttributes : NSObject <Swift>

{
    long long _remoteCameraOrientation;
    long long _localVideoContextSlotIdentifier;
    long long _remoteVideoContextSlotIdentifier;
}

@property (nonatomic) long long remoteCameraOrientation;
@property (nonatomic) long long localVideoContextSlotIdentifier;
@property (nonatomic) long long remoteVideoContextSlotIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToVideoCallAttributes:(id)arg1;

@end
