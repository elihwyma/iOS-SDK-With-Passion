/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface C2MetricOptions : NSObject

{
    _Bool _anonymous;
    _Bool _pushTrigger;
    unsigned int _reportFrequencyRandomValue;
    NSURL *_c2MetricsEndpoint;
    unsigned long long _reportFrequency;
    unsigned long long _reportFrequencyBase;
    unsigned long long _reportClientOperationFrequency;
    unsigned long long _reportClientOperationFrequencyBase;
    unsigned long long _reportOperationGroupFrequency;
    unsigned long long _reportOperationGroupFrequencyBase;
    NSString *_clientProcessVersion;
    NSString *_clientProcessBundleId;
    NSString *_container;
    NSString *_environment;
    NSArray *_operationGroups;
    NSArray *_clientOperations;
    CDUnknownBlockType _didCompleteWithError;
    CDUnknownBlockType _testBehavior_reportMetric;
}

@property (nonatomic) unsigned int reportFrequencyRandomValue;
@property (nonatomic, readonly) NSString *headerValueForTriggers;
@property (copy, nonatomic) CDUnknownBlockType testBehavior_reportMetric;
@property (copy, nonatomic) NSURL *c2MetricsEndpoint;
@property (nonatomic) unsigned long long reportFrequency;
@property (nonatomic) unsigned long long reportFrequencyBase;
@property (nonatomic) unsigned long long reportClientOperationFrequency;
@property (nonatomic) unsigned long long reportClientOperationFrequencyBase;
@property (nonatomic) unsigned long long reportOperationGroupFrequency;
@property (nonatomic) unsigned long long reportOperationGroupFrequencyBase;
@property (copy, nonatomic) NSString *clientProcessVersion;
@property (copy, nonatomic) NSString *clientProcessBundleId;
@property (copy, nonatomic) NSString *container;
@property (copy, nonatomic) NSString *environment;
@property (nonatomic) _Bool anonymous;
@property (copy, nonatomic) NSArray *operationGroups;
@property (copy, nonatomic) NSArray *clientOperations;
@property (nonatomic) _Bool pushTrigger;
@property (copy, nonatomic) CDUnknownBlockType didCompleteWithError;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)operationGroupTriggered:(id)arg1;
- (_Bool)clientOperationTriggered:(id)arg1;
- (int)generateTriggerWithResponseHeader:(unsigned char)arg1;
- (void)rollReportFrequencyRandomValue;
- (id)generateCloudKitInfo;

@end
