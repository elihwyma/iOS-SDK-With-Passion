/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBCurrencyAmountValue, _INPBUserActivity;

@interface _INPBRideCompletionStatus : PBCodable <Swift>

{
    CDStruct_95bda58d _feedbackTypes;
    struct {
        unsigned int canceled:1;
        unsigned int canceledByService:1;
        unsigned int completed:1;
        unsigned int missedPickup:1;
        unsigned int outstanding:1;
    } _has;
    _Bool _canceled;
    _Bool _canceledByService;
    _Bool _completed;
    _Bool _missedPickup;
    _Bool _outstanding;
    _Bool __encodeLegacyGloryData;
    _INPBUserActivity *_completionUserActivity;
    NSArray *_defaultTippingOptions;
    _INPBCurrencyAmountValue *_paymentAmount;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool canceled;
@property (nonatomic) _Bool hasCanceled;
@property (nonatomic) _Bool canceledByService;
@property (nonatomic) _Bool hasCanceledByService;
@property (nonatomic) _Bool completed;
@property (nonatomic) _Bool hasCompleted;
@property (retain, nonatomic) _INPBUserActivity *completionUserActivity;
@property (nonatomic, readonly) _Bool hasCompletionUserActivity;
@property (copy, nonatomic) NSArray *defaultTippingOptions;
@property (nonatomic, readonly) unsigned long long defaultTippingOptionsCount;
@property (nonatomic, readonly) int *feedbackTypes;
@property (nonatomic, readonly) unsigned long long feedbackTypesCount;
@property (nonatomic) _Bool missedPickup;
@property (nonatomic) _Bool hasMissedPickup;
@property (nonatomic) _Bool outstanding;
@property (nonatomic) _Bool hasOutstanding;
@property (retain, nonatomic) _INPBCurrencyAmountValue *paymentAmount;
@property (nonatomic, readonly) _Bool hasPaymentAmount;

+ (_Bool)supportsSecureCoding;
+ (Class)defaultTippingOptionsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearDefaultTippingOptions;
- (void)addDefaultTippingOptions:(id)arg1;
- (id)defaultTippingOptionsAtIndex:(unsigned long long)arg1;
- (void)clearFeedbackTypes;
- (void)addFeedbackType:(int)arg1;
- (int)feedbackTypeAtIndex:(unsigned long long)arg1;
- (void)setFeedbackTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)feedbackTypesAsString:(int)arg1;
- (int)StringAsFeedbackTypes:(id)arg1;

@end
