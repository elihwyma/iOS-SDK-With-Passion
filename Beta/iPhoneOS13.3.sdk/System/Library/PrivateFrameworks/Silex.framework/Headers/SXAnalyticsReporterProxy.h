/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXAnalyticsReporting;

@interface SXAnalyticsReporterProxy : NSObject

{
    id <SXAnalyticsReporting> _analyticsReporter;
}

@property (weak, nonatomic, readonly) id <SXAnalyticsReporting> analyticsReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reportEvent:(id)arg1;
- (id)initWithAnalyticsReporter:(id)arg1;

@end
