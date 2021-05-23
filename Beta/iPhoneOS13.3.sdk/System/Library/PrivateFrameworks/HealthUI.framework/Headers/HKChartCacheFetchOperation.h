/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKFetchOperation.h>

@protocol NSCopying;

@interface HKChartCacheFetchOperation : HKFetchOperation

{
    id <NSCopying> _identifier;
}

@property (retain, nonatomic) id <NSCopying> identifier;

@end
