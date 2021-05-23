/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@class MTMetricsKitTemplate;

@interface MTObject : NSObject

{
    MTMetricsKitTemplate *_metricsKit;
}

@property (weak, nonatomic) MTMetricsKitTemplate *metricsKit;

- (id)initWithMetricsKit:(id)arg1;

@end
