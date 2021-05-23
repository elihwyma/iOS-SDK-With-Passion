/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <Foundation/NSObject.h>

@protocol MSFetchMetricsControllerDataSource;

@interface MSFetchMetricsController : NSObject

{
    double _startTime;
    id <MSFetchMetricsControllerDataSource> _dataSource;
}

@property (weak, nonatomic, readonly) id <MSFetchMetricsControllerDataSource> dataSource;

- (void)start;
- (id)initWithDataSource:(id)arg1;
- (void)stopAndSubmitWithOptions:(unsigned long long)arg1 fetchSize:(unsigned long long)arg2;

@end
