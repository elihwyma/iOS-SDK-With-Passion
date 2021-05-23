/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class IDSDestination, IDSOutgoingMessageCheckpointTrace, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface IDSSendParameters : NSObject <Swift>

{
    NSMutableDictionary *_params;
    IDSOutgoingMessageCheckpointTrace *_checkpointTrace;
}

@property (retain, nonatomic) NSDictionary *message;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDictionary *protobuf;
@property (retain, nonatomic) NSString *resourcePath;
@property (retain, nonatomic) NSDictionary *resourceMetadata;
@property (retain, nonatomic) IDSDestination *destinations;
@property (retain, nonatomic) NSArray *finalDestinations;
@property (retain, nonatomic) NSString *accountUUID;
@property (retain, nonatomic) NSString *mainAccountUUID;
@property (retain, nonatomic) NSString *localDestinationDeviceUUID;
@property (nonatomic) _Bool wantsAppAck;
@property (nonatomic) _Bool encryptPayload;
@property (nonatomic) _Bool compressPayload;
@property (nonatomic) double timeout;
@property (nonatomic) long long priority;
@property (nonatomic) _Bool localDelivery;
@property (nonatomic) _Bool requireBluetooth;
@property (nonatomic) _Bool requireLocalWiFi;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool bypassDuet;
@property (nonatomic) _Bool fakeMessage;
@property (nonatomic) _Bool bypassStorage;
@property (nonatomic) _Bool activityContinuation;
@property (nonatomic) _Bool nonWaking;
@property (retain, nonatomic) NSNumber *messageType;
@property (retain, nonatomic) NSString *queueOneIdentifier;
@property (nonatomic) _Bool fireAndForget;
@property (retain, nonatomic) NSArray *duetIdentifiersOverride;
@property (nonatomic) _Bool forceEncryptionOff;
@property (retain, nonatomic) NSString *subService;
@property (retain, nonatomic) NSString *subServiceAccountUUID;
@property (nonatomic) _Bool allowCloudDelivery;
@property (nonatomic) _Bool nonCloudWaking;
@property (nonatomic) _Bool alwaysSkipSelf;
@property (nonatomic) _Bool disallowRefresh;
@property (retain, nonatomic) NSString *metricReportIdentifier;
@property (nonatomic) _Bool liveMessageDelivery;
@property (nonatomic) _Bool sessionForceInternetInvitation;
@property (nonatomic) _Bool expectsPeerResponse;
@property (retain, nonatomic) NSString *peerResponseIdentifier;
@property (nonatomic) _Bool compressed;
@property (retain, nonatomic) NSString *fromID;
@property (retain, nonatomic) NSString *originalfromID;
@property (nonatomic) _Bool useDictAsTopLevel;
@property (nonatomic) _Bool wantsResponse;
@property (retain, nonatomic) NSData *dataToEncrypt;
@property (retain, nonatomic) NSData *messageUUID;
@property (retain, nonatomic) NSString *alternateCallbackID;
@property (retain, nonatomic) NSNumber *command;
@property (retain, nonatomic) NSNumber *commandContext;
@property (nonatomic) _Bool wantsDeliveryStatus;
@property (nonatomic) _Bool wantsCertifiedDelivery;
@property (retain, nonatomic) NSDictionary *deliveryStatusContext;
@property (retain, nonatomic) NSArray *interestingRegistrationProperties;
@property (retain, nonatomic) NSArray *requireAllRegistrationProperties;
@property (retain, nonatomic) NSArray *requireLackOfRegistrationProperties;
@property (nonatomic) _Bool isProxiedOutgoingMessage;
@property (retain, nonatomic) NSNumber *dropMessageIndicatorCommand;
@property (retain, nonatomic) NSNumber *originalTimestamp;
@property (retain, nonatomic) NSArray *bulkedPayload;
@property (nonatomic) _Bool daemonDeathResend;
@property (nonatomic) _Bool bypassSizeCheck;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic) _Bool enforceRemoteTimeouts;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) IDSOutgoingMessageCheckpointTrace *checkpointTrace;
@property (nonatomic) _Bool wantsProgress;
@property (nonatomic) _Bool ignoreMaxRetryCount;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSData *accessToken;
@property (nonatomic) _Bool homeKitPayload;
@property (nonatomic) _Bool disableAliasValidation;
@property (retain, nonatomic) NSData *groupData;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentationIncludingTrace:(_Bool)arg1;

@end
