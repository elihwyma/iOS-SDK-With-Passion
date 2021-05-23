/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class AFRequestCompletionOptions, AFSpeechRequestOptions, NSData, NSDictionary, NSNumber, NSString, NSUUID, SAStartLocalRequest, SAStartRequest;

@interface AFRequestInfo : NSObject <Swift>

{
    _Bool _handoffRequiresUserInteraction;
    unsigned long long _timestamp;
    struct NSUUID *_turnIdentifier;
    AFRequestCompletionOptions *_requestCompletionOptions;
    NSUUID *_uuid;
    unsigned long long _options;
    NSNumber *_notifyState;
    NSString *_text;
    NSString *_directAction;
    NSString *_handoffOriginDeviceName;
    NSData *_handoffRequestData;
    NSString *_handoffURLString;
    NSString *_handoffNotification;
    NSString *_correctedSpeech;
    NSDictionary *_correctedSpeechContext;
    SAStartRequest *_startRequest;
    SAStartLocalRequest *_startLocalRequest;
    long long _activationEvent;
    AFSpeechRequestOptions *_speechRequestOptions;
    NSNumber *_combinedRank;
    NSNumber *_combinedScore;
    NSString *_interactionId;
    NSNumber *_onDeviceUtterancesPresent;
    NSNumber *_originalRank;
    NSNumber *_originalScore;
    NSString *_previousUtterance;
    NSString *_sessionId;
    NSString *_utteranceSource;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSNumber *notifyState;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *directAction;
@property (copy, nonatomic) NSString *handoffOriginDeviceName;
@property (copy, nonatomic) NSData *handoffRequestData;
@property (copy, nonatomic) NSString *handoffURLString;
@property (nonatomic) _Bool handoffRequiresUserInteraction;
@property (copy, nonatomic) NSString *handoffNotification;
@property (copy, nonatomic) NSString *correctedSpeech;
@property (copy, nonatomic) NSDictionary *correctedSpeechContext;
@property (copy, nonatomic) SAStartRequest *startRequest;
@property (copy, nonatomic) SAStartLocalRequest *startLocalRequest;
@property (nonatomic) long long activationEvent;
@property (copy, nonatomic) AFSpeechRequestOptions *speechRequestOptions;
@property (copy, nonatomic) AFRequestCompletionOptions *requestCompletionOptions;
@property (copy, nonatomic) NSNumber *combinedRank;
@property (copy, nonatomic) NSNumber *combinedScore;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSNumber *onDeviceUtterancesPresent;
@property (copy, nonatomic) NSNumber *originalRank;
@property (copy, nonatomic) NSNumber *originalScore;
@property (copy, nonatomic) NSString *previousUtterance;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *utteranceSource;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (copy, nonatomic) NSUUID *turnIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(unsigned long long)arg1;
- (_Bool)requiresUserInteraction;
- (_Bool)isSpeechRequest;

@end
