/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class MKLocalSearch;

@interface WFSearchLocalBusinessesAction : WFAction

{
    MKLocalSearch *_localSearch;
}

@property (retain, nonatomic) MKLocalSearch *localSearch;

- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)shouldUseMetricSystem;
- (void)runSearchWithLocation:(id)arg1;

@end
