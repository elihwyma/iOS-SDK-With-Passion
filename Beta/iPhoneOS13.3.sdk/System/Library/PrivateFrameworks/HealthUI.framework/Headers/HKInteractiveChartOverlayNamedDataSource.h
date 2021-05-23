/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol HKChartCacheDataSource;

@interface HKInteractiveChartOverlayNamedDataSource : NSObject

{
    id <HKChartCacheDataSource> _dataSource;
    NSString *_name;
    CDUnknownBlockType _contextTitleForTimeScope;
}

@property (retain, nonatomic) id <HKChartCacheDataSource> dataSource;
@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) CDUnknownBlockType contextTitleForTimeScope;

- (id)initWithDataSource:(id)arg1 named:(id)arg2 withContextTitleForTimeScope:(CDUnknownBlockType)arg3;

@end
