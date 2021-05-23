/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentView.h>

@class UIView;

@protocol SXIssueCoverViewProvider;

@interface SXIssueCoverComponentView : SXComponentView

{
    id <SXIssueCoverViewProvider> _viewProvider;
    UIView *_coverView;
}

@property (nonatomic, readonly) id <SXIssueCoverViewProvider> viewProvider;
@property (retain, nonatomic) UIView *coverView;

- (void)discardContents;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)renderIssueCover;
- (void)renderContents;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 viewProvider:(id)arg5;

@end
