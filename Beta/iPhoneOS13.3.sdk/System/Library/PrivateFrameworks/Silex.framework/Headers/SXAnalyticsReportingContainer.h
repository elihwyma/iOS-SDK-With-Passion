/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXAnalyticsReporting;

@interface SXAnalyticsReportingContainer : NSObject

{
    id <SXAnalyticsReporting> _analyticsReporting;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <SXAnalyticsReporting> analyticsReporting;

- (void)registerAnalyticsReporting:(id)arg1;

@end
