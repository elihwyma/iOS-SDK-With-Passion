/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class APSOutgoingMessageCheckpointTrace, NSArray, NSData, NSDictionary, NSError, NSNumber, NSString;

@interface IDSDeliveryContext : NSObject

{
    NSNumber *_responseCommand;
    NSNumber *_responseTimeStamp;
    long long _responseCode;
    NSError *_responseError;
    NSData *_responseToken;
    NSArray *_displayIDs;
    NSError *_deliveryError;
    long long _idsResponseCode;
    _Bool _lastCall;
    _Bool _lastCourierAck;
    APSOutgoingMessageCheckpointTrace *_apsCheckpointTrace;
    NSString *_deviceID;
    NSNumber *_currentAverageRTT;
    NSNumber *_isDeviceBlackedOut;
    NSNumber *_localMessageState;
    NSString *_wpConnectionErrorDomain;
    NSNumber *_wpConnectionErrorCode;
    NSDictionary *_wpConnectionErrorUserInfo;
    NSNumber *_endpointState;
    NSNumber *_failureReason;
    APSOutgoingMessageCheckpointTrace *_apsdCheckpointTrace;
}

@property (copy, nonatomic) NSNumber *responseCommand;
@property (copy, nonatomic) NSNumber *responseTimeStamp;
@property (nonatomic) long long responseCode;
@property (copy, nonatomic) NSError *responseError;
@property (copy, nonatomic) NSData *responseToken;
@property (copy, nonatomic) NSError *deliveryError;
@property (copy, nonatomic) NSNumber *failureReason;
@property (copy, nonatomic) NSArray *displayIDs;
@property (nonatomic) long long idsResponseCode;
@property (nonatomic) _Bool lastCall;
@property (nonatomic) _Bool lastCourierAck;
@property (copy, nonatomic) APSOutgoingMessageCheckpointTrace *apsdCheckpointTrace;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSNumber *currentAverageRTT;
@property (copy, nonatomic) NSNumber *isDeviceBlackedOut;
@property (copy, nonatomic) NSNumber *localMessageState;
@property (copy, nonatomic) NSNumber *endpointState;
@property (copy, nonatomic) NSString *wpConnectionErrorDomain;
@property (copy, nonatomic) NSNumber *wpConnectionErrorCode;
@property (copy, nonatomic) NSDictionary *wpConnectionErrorUserInfo;

+ (long long)_endpointStateForServerDeliveryStatus:(id)arg1;

- (id)initWithError:(id)arg1;
- (id)initWithServerResponseDictionary:(id)arg1;
- (id)initWithResponseCode:(long long)arg1 error:(id)arg2 lastCall:(_Bool)arg3;
- (id)initWithResponseCode:(long long)arg1 deviceID:(id)arg2;
- (id)initWithResponseCode:(long long)arg1 deviceID:(id)arg2 currentAverageRTT:(id)arg3 isDeviceBlackedOut:(id)arg4 localMessageState:(id)arg5;

@end
