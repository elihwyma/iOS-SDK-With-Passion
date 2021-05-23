/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSSQLiteEntity.h>

@class NSDictionary;

@interface SSMetricsEventTableEntity : SSSQLiteEntity

{
    NSDictionary *_reportingDictionary;
}

+ (id)databaseTable;

- (void)dealloc;
- (id)reportingDictionary;
- (id)reportingCanaryIdentifier;
- (id)reportingJSON;

@end
