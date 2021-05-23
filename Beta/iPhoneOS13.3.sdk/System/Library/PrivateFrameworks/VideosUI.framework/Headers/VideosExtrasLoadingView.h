/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class IKAppDocument, NSDictionary, NSString, VideosExtrasActivityIndicator;

@protocol VideosExtrasLoadingViewDelegate;

__attribute__((visibility("hidden")))
@interface VideosExtrasLoadingView : UIView

{
    IKAppDocument *_document;
    NSDictionary *_options;
    VideosExtrasActivityIndicator *_activityIndicator;
    id <VideosExtrasLoadingViewDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_show;
- (void)documentNeedsUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithDocument:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (void)startCountdownToVisibilityWithInterval:(double)arg1;
- (void)cancelCountdownToVisibility;

@end
