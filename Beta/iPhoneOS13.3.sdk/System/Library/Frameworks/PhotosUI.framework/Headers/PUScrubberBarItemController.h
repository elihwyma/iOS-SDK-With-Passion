/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PUBrowsingSession, PUScrubberView, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface PUScrubberBarItemController : NSObject

{
    PUScrubberView *_scrubberView;
    UIBarButtonItem *_scrubberBarButtonItem;
    PUBrowsingSession *_browsingSession;
}

@property (retain, nonatomic) PUBrowsingSession *browsingSession;
@property (nonatomic, readonly) UIBarButtonItem *scrubberBarButtonItem;

- (void)_invalidateScrubberBarButtonItem;
- (void)_updateScrubberBarButtonItemIfNeeded;

@end
