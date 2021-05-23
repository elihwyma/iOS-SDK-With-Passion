/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class UIView;

@protocol SBUIBannerSource, SBUIBannerView;

@interface SBBannerViewCallbackManager : NSObject

{
    UIView<SBUIBannerView> *_view;
    id <SBUIBannerSource> _source;
    _Bool _sentWillAppear;
    _Bool _sentDidAppear;
    _Bool _sentWillDismiss;
    _Bool _sentDidDismiss;
    int _dismissReason;
}

- (id)init;
- (void)dealloc;
- (id)initWithBannerView:(id)arg1;
- (_Bool)hasSentAnyCallbacks;
- (void)noteWillDismissWithReason:(int)arg1;
- (void)noteWillAppear;
- (void)noteDidDismissWithReason:(int)arg1;
- (void)matchPreviousCallbacks:(id)arg1;
- (void)noteDidAppear;

@end
