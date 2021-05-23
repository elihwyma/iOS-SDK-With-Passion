/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSString;

@interface AFPeerInfo : NSObject <Swift>

{
    _Bool _isDeviceOwnedByCurrentUser;
    NSString *_idsIdentifier;
    NSString *_idsFirstRoutableInternetDestination;
    NSString *_rapportEffectiveIdentifier;
    NSString *_mediaSystemIdentifier;
}

@property (nonatomic, setter=setDeviceOwnedByCurrentUser:) _Bool isDeviceOwnedByCurrentUser;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSString *idsFirstRoutableInternetDestination;
@property (copy, nonatomic) NSString *rapportEffectiveIdentifier;
@property (copy, nonatomic) NSString *mediaSystemIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;

@end
