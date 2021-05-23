/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSString, PBCodable;

@interface WFUserJoinEvent : NSObject

{
    unsigned int _metricIdentifier;
    PBCodable *_metric;
}

@property (nonatomic) unsigned int metricIdentifier;
@property (retain, nonatomic) PBCodable *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)joinEventWithSecurity:(long long)arg1 error:(long long)arg2 sectionCounts:(id)arg3 sectionName:(id)arg4;
+ (id)joinEventWithType:(long long)arg1 security:(long long)arg2 error:(long long)arg3;

- (unsigned int)_metricIdForType:(long long)arg1;
- (id)_countMetricsFromSectionCounts:(id)arg1;
- (id)initWithType:(long long)arg1 security:(long long)arg2 error:(long long)arg3 sectionCounts:(id)arg4 sectionName:(id)arg5;

@end
