/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBArchivedObject;

@interface _INPBRunWorkflowIntentResponse : PBCodable <Swift>

{
    struct {
        unsigned int continueRunning:1;
        unsigned int requestsIntentExecution:1;
        unsigned int waitingForResume:1;
    } _has;
    _Bool _continueRunning;
    _Bool _requestsIntentExecution;
    _Bool _waitingForResume;
    _Bool __encodeLegacyGloryData;
    NSArray *_steps;
    _INPBArchivedObject *_underlyingIntent;
    _INPBArchivedObject *_underlyingIntentResponse;
    NSString *_utterance;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool continueRunning;
@property (nonatomic) _Bool hasContinueRunning;
@property (nonatomic) _Bool requestsIntentExecution;
@property (nonatomic) _Bool hasRequestsIntentExecution;
@property (copy, nonatomic) NSArray *steps;
@property (nonatomic, readonly) unsigned long long stepsCount;
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntent;
@property (nonatomic, readonly) _Bool hasUnderlyingIntent;
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntentResponse;
@property (nonatomic, readonly) _Bool hasUnderlyingIntentResponse;
@property (copy, nonatomic) NSString *utterance;
@property (nonatomic, readonly) _Bool hasUtterance;
@property (nonatomic) _Bool waitingForResume;
@property (nonatomic) _Bool hasWaitingForResume;

+ (_Bool)supportsSecureCoding;
+ (Class)stepType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearSteps;
- (id)stepAtIndex:(unsigned long long)arg1;
- (void)addStep:(id)arg1;

@end
