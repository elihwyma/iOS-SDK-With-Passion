/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDOperationMetrics, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKDOperationStatistics : NSObject

{
    NSString *_operationClassName;
    NSMutableDictionary *_recentErrorsByDate;
    unsigned long long _operationCount;
    CKDOperationMetrics *_aggregateCKMetrics;
    CKDOperationMetrics *_aggregateMMCSMetrics;
}

@property (nonatomic, readonly) NSString *operationClassName;
@property (nonatomic, readonly) NSMutableDictionary *recentErrorsByDate;
@property (readonly) unsigned long long operationCount;
@property (nonatomic, readonly) CKDOperationMetrics *aggregateCKMetrics;
@property (nonatomic, readonly) CKDOperationMetrics *aggregateMMCSMetrics;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addOperation:(id)arg1;
- (void)merge:(id)arg1;
- (id)CKStatusReportArray;
- (id)initWithOperationClassName:(id)arg1;
- (id)_trimmedError:(id)arg1;
- (void)_addMetrics:(id)arg1 toAggregate:(id)arg2;

@end
