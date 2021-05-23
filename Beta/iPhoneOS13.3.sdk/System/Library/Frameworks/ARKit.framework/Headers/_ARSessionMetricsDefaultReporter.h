/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _ARSessionMetricsDefaultReporter : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addValue:(long long)arg1 forScalarKey:(id)arg2;
- (void)pushValue:(double)arg1 forDistributionKey:(id)arg2;
- (void)postDarwinNotification:(id)arg1;

@end
