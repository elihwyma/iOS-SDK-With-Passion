/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@protocol SXAnalyticsReportingProvider, SXComponentExposureMonitor;

@interface SXExposureComponentViewPostProcessor : NSObject

{
    id <SXComponentExposureMonitor> _monitor;
    id <SXAnalyticsReportingProvider> _analyticsReporterProvider;
    NSMapTable *_exposedEvents;
}

@property (nonatomic, readonly) id <SXComponentExposureMonitor> monitor;
@property (nonatomic, readonly) id <SXAnalyticsReportingProvider> analyticsReporterProvider;
@property (nonatomic, readonly) NSMapTable *exposedEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)processComponent:(id)arg1 view:(id)arg2;
- (id)initWithExposureMonitor:(id)arg1 analyticsReportingProvider:(id)arg2;

@end
