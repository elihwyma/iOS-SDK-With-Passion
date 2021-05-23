/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@protocol SBAWDMetricDelegate;

@interface SBAWDMetric : NSObject

{
    id <SBAWDMetricDelegate> _delegate;
}

@property (weak, nonatomic) id <SBAWDMetricDelegate> delegate;

- (Class)dataClass;
- (unsigned long long)componentID;
- (unsigned long long)metricID;
- (void)postWithDataBuilder:(CDUnknownBlockType)arg1;
- (id)configureWithData:(id)arg1;
- (void)_postMetric:(id)arg1 withID:(unsigned int)arg2;

@end
