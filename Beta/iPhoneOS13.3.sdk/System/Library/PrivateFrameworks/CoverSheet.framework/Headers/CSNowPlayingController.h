/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@class CSMediaControlsViewController;

@interface CSNowPlayingController : NSObject

{
    CSMediaControlsViewController *_controlsViewController;
}

@property (nonatomic, readonly) CSMediaControlsViewController *controlsViewController;

- (id)init;

@end
