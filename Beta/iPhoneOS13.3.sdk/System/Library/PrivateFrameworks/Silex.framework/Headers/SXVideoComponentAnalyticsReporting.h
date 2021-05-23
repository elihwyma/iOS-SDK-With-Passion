/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXVideoComponent;

@protocol SXAnalyticsReporting;

@interface SXVideoComponentAnalyticsReporting : NSObject

{
    SXVideoComponent *_component;
    id <SXAnalyticsReporting> _analyticsReporting;
}

@property (nonatomic, readonly) SXVideoComponent *component;
@property (weak, nonatomic, readonly) id <SXAnalyticsReporting> analyticsReporting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reportEvent:(id)arg1;
- (id)initWithComponent:(id)arg1 analyticsProviding:(id)arg2;

@end
