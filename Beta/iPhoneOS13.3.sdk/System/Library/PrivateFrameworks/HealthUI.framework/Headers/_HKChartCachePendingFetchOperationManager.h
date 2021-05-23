/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _HKChartCachePendingFetchOperationManager : NSObject

{
    NSMutableDictionary *_fetchOperationsByIdentifier;
    NSMutableDictionary *_fetchOperationsByUUID;
    NSMutableDictionary *_retryCountByIdentifier;
}

- (id)init;
- (long long)retryCountForIdentifier:(id)arg1;
- (void)addFetchOperation:(id)arg1;
- (void)removeFetchOperation:(id)arg1;
- (id)fetchOperationForIdentifier:(id)arg1;
- (void)incrementRetryCountForIdentifier:(id)arg1;
- (void)resetRetryCountForIdentifier:(id)arg1;
- (id)allPendingIdentifiers;

@end
