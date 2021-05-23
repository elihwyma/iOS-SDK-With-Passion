/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSString, NSUUID, TUCTCapabilitiesState, TUThumperCTCapabilitiesState;

@interface TUSenderIdentityCapabilitiesState : NSObject <Swift>

{
    _Bool _supportsSimultaneousVoiceAndData;
    NSUUID *_senderIdentityUUID;
    TUCTCapabilitiesState *_csCallingCapabilitiesState;
    TUCTCapabilitiesState *_voLTECallingCapabilitiesState;
    TUCTCapabilitiesState *_wiFiCallingCapabilitiesState;
    TUThumperCTCapabilitiesState *_thumperCallingCapabilitiesState;
}

@property (copy, nonatomic, readonly) NSUUID *senderIdentityUUID;
@property (nonatomic) _Bool supportsSimultaneousVoiceAndData;
@property (copy, nonatomic) TUCTCapabilitiesState *csCallingCapabilitiesState;
@property (copy, nonatomic) TUCTCapabilitiesState *voLTECallingCapabilitiesState;
@property (copy, nonatomic) TUCTCapabilitiesState *wiFiCallingCapabilitiesState;
@property (copy, nonatomic) TUThumperCTCapabilitiesState *thumperCallingCapabilitiesState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg1;
- (id)publiclyAccessibleCopy;
- (id)initWithSenderIdentityUUID:(id)arg1;

@end
