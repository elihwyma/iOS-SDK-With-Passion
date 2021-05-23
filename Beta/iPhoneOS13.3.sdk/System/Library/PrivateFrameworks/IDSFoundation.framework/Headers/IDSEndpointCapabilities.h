/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@interface IDSEndpointCapabilities : NSObject <Swift>

{
    BOOL _showPeerErrors;
    BOOL _supportsInlineAttachments;
    BOOL _supportsKeepReceipts;
    BOOL _supportsLocationSharing;
    BOOL _supportsStickersV1;
    BOOL _supportsChatAppsV1;
    BOOL _supportsBubbleEditingV1;
    BOOL _supportsAcknowledgementsV1;
    BOOL _supportsFullScreenMomentsV1;
    BOOL _supportsFullScreenMomentsV2;
    BOOL _supportsFullScreenMomentsV3;
    BOOL _supportsScreenTimeV2;
    BOOL _supportsIncomingFindMyV1;
    BOOL _supportsInvisibleInkV1;
    BOOL _supportsImpactEffectsV1;
    BOOL _supportsUpdateAttachmentsV1;
    BOOL _supportsAutoloopVideoV1;
    BOOL _supportsMediaV2;
    BOOL _supportsActivitySharing;
    BOOL _optionallyReceiveTypingIndicator;
    BOOL _isC2KEquipment;
    BOOL _supportsPhotosExtensionV1;
    BOOL _supportsAudioMessagingV2;
    BOOL _supportsAnimojiV2;
    BOOL _supportsCertifiedDeliveryV1;
    BOOL _supportsOriginalTimestampOrderingV1;
    BOOL _nicknamesVersion;
    BOOL _ecVersion;
    BOOL _supportsProtobufPayloadDataV2;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToEndpointCapabilites:(id)arg1;
- (id)initWithCapabilitiesMap:(id)arg1;
- (long long)valueForCapability:(id)arg1;

@end
