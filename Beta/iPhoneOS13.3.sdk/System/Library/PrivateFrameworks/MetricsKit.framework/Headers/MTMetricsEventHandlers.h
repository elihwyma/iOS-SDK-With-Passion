/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTEventHandlers.h>

@class MTAccountEventHandler, MTBaseEventDataProvider, MTClickEventHandler, MTDialogEventHandler, MTEnterEventHandler, MTExitEventHandler, MTFlexibleEventHandler, MTImpressionsEventHandler, MTMediaEventHandler, MTPageEventHandler, MTSearchEventHandler;

@interface MTMetricsEventHandlers : MTEventHandlers

{
    MTBaseEventDataProvider *_base;
    MTClickEventHandler *_click;
    MTEnterEventHandler *_enter;
    MTExitEventHandler *_exit;
    MTImpressionsEventHandler *_impressions;
    MTPageEventHandler *_page;
    MTFlexibleEventHandler *_flexible;
    MTSearchEventHandler *_search;
    MTAccountEventHandler *_account;
    MTDialogEventHandler *_dialog;
    MTMediaEventHandler *_media;
}

@property (nonatomic, readonly) MTClickEventHandler *click;
@property (nonatomic, readonly) MTEnterEventHandler *enter;
@property (nonatomic, readonly) MTExitEventHandler *exit;
@property (nonatomic, readonly) MTFlexibleEventHandler *flexible;
@property (nonatomic, readonly) MTImpressionsEventHandler *impressions;
@property (nonatomic, readonly) MTPageEventHandler *page;
@property (nonatomic, readonly) MTSearchEventHandler *search;
@property (nonatomic, readonly) MTAccountEventHandler *account;
@property (nonatomic, readonly) MTDialogEventHandler *dialog;
@property (nonatomic, readonly) MTMediaEventHandler *media;

- (void)setBase:(id)arg1;
- (id)base;

@end
