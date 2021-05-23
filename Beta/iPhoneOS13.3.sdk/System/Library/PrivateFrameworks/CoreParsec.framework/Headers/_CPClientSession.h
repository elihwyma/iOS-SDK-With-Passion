/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, NSDictionary, NSString, _CPUsageEnvelope, _CPUsageSinceLookback;

@interface _CPClientSession : PBCodable

{
    _Bool _removeTimestamps;
    _Bool _duEnabled;
    int _previousSessionEndReason;
    NSString *_agent;
    NSString *_userGuidString;
    NSDictionary *_resourceVersions;
    double _sessionStart;
    NSString *_parsecDeveloperID;
    NSString *_countryCode;
    NSString *_locale;
    _CPUsageSinceLookback *_usageSinceLookback;
    _CPUsageEnvelope *_cohortsFeedback;
    NSData *_jsonFeedback;
    NSArray *_feedbacks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *agent;
@property (copy, nonatomic) NSString *userGuidString;
@property (copy, nonatomic) NSDictionary *resourceVersions;
@property (nonatomic) double sessionStart;
@property (nonatomic) int previousSessionEndReason;
@property (nonatomic) _Bool removeTimestamps;
@property (copy, nonatomic) NSString *parsecDeveloperID;
@property (nonatomic) _Bool duEnabled;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *locale;
@property (retain, nonatomic) _CPUsageSinceLookback *usageSinceLookback;
@property (retain, nonatomic) _CPUsageEnvelope *cohortsFeedback;
@property (copy, nonatomic) NSData *jsonFeedback;
@property (copy, nonatomic) NSArray *feedbacks;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)setFeedback:(id)arg1;
- (id)feedbackAtIndex:(unsigned long long)arg1;
- (void)addFeedback:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)setResourceVersions:(id)arg1 forKey:(id)arg2;
- (_Bool)getResourceVersions:(id *)arg1 forKey:(id)arg2;
- (void)clearFeedback;
- (unsigned long long)feedbackCount;

@end
