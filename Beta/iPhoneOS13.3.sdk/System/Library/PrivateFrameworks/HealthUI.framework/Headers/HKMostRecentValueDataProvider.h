/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKValueDataProvider.h>

@protocol HKDataProviderValue;

@interface HKMostRecentValueDataProvider : HKValueDataProvider

@property (nonatomic, readonly) id <HKDataProviderValue> value;

- (id)currentValue;
- (id)fetchOperationWithCompletion:(CDUnknownBlockType)arg1;
- (id)_mostRecentValueQueryWithCompletion:(CDUnknownBlockType)arg1;

@end
