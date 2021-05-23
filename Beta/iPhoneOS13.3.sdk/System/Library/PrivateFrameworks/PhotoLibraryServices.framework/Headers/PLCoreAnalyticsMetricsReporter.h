/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLCoreAnalyticsMetricsReporter : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reportMetricsEvents:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)_eventNameForEvent:(id)arg1;

@end
