/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentView.h>

@protocol SXLayoutInvalidator;

@interface SXDebugComponentView : SXComponentView

{
    id <SXLayoutInvalidator> _invalidator;
}

@property (nonatomic, readonly) id <SXLayoutInvalidator> invalidator;

- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)loadComponent:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 invalidator:(id)arg5;

@end
