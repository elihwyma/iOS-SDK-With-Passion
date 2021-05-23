/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface TRICloudKitRequestBuilder : NSObject

{
    NSString *_ckApiKey;
    unsigned int _cacheControlMaxAge;
    NSString *_recordType;
    NSMutableArray *_filterBy;
    NSMutableArray *_sortBy;
    NSString *_zoneName;
    double _bundleFetchTimeout;
    unsigned long long _cachePolicy;
    NSArray *_fieldNames;
    NSString *_appleEdgeCacheValue;
}

@property (retain) NSString *appleEdgeCacheValue;
@property (retain, nonatomic) NSString *recordType;
@property (retain, nonatomic) NSMutableArray *filterBy;
@property (retain, nonatomic) NSMutableArray *sortBy;
@property (retain, nonatomic) NSString *zoneName;
@property double bundleFetchTimeout;
@property unsigned int cacheControlMaxAge;
@property unsigned long long cachePolicy;
@property (retain, nonatomic) NSArray *fieldNames;

+ (id)requestForExperiment;
+ (id)requestForTreatment;
+ (id)requestWithRecordType:(id)arg1;

- (id)init;
- (id)query;
- (id)request;
- (id)body;
- (id)baseUrl;
- (void)sortByModifiedDate;
- (void)filterByModificationDateNewerThan:(id)arg1;
- (void)filterByFieldName:(id)arg1 comparator:(id)arg2 value:(id)arg3 type:(id)arg4;
- (void)filterByExperimentId:(struct NSString *)arg1;
- (void)filterByTreatmentId:(struct NSString *)arg1;
- (void)filterByFieldName:(id)arg1 equalsStringValue:(id)arg2;
- (void)sortBy:(id)arg1 ascending:(_Bool)arg2;
- (id)_cloudKitEnvironment;
- (id)_cloudKitApiToken;
- (id)cacheControlValue;

@end
