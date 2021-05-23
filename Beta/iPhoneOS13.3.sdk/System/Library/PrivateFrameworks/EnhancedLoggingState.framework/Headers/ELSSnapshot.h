/*
 Image: /System/Library/PrivateFrameworks/EnhancedLoggingState.framework/EnhancedLoggingState
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSUserDefaults;

@interface ELSSnapshot : NSObject

{
    unsigned long long _status;
    unsigned long long _consent;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_queue;
    long long _retriesRemaining;
    NSArray *_identifiersToRetry;
    NSDictionary *_metadata;
    NSNumber *_uploadCompletedPercentage;
    NSDictionary *_followUpOptions;
    NSUserDefaults *_defaults;
}

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long consent;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSArray *queue;
@property (nonatomic) long long retriesRemaining;
@property (retain, nonatomic) NSArray *identifiersToRetry;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSNumber *uploadCompletedPercentage;
@property (retain, nonatomic) NSDictionary *followUpOptions;
@property (nonatomic, readonly) double durationRemaining;
@property (nonatomic, readonly) double totalDuration;
@property (nonatomic, readonly) _Bool needsFollowup;
@property (nonatomic, readonly) NSArray *encodedQueue;

+ (id)statusToString:(unsigned long long)arg1;
+ (id)consentToString:(unsigned long long)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)JSONObject;
- (void)refreshDates;
- (void)refreshKeyPaths:(id)arg1;
- (void)refreshStatus;
- (void)refreshConsent;
- (void)refreshQueue;
- (void)refreshRetriesRemaining;
- (void)refreshIdentifiersToRetry;
- (void)refreshMetadata;
- (void)refreshUploadCompletedPercentage;
- (void)refreshFollowUpOptions;
- (id)decodeQueue:(id)arg1;
- (id)dictionaryRepresentationPretty:(_Bool)arg1;

@end
