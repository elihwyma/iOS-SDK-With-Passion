/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAction.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface VUIActionAppPunchout : VUIAction

{
    NSURL *_punchoutURLWithoutAssociatedPlayable;
}

@property (nonatomic, readonly) NSURL *punchoutURLWithoutAssociatedPlayable;

- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContextData:(id)arg1;
- (_Bool)_openPunchoutURL:(id)arg1 isPlaybackURL:(_Bool)arg2;

@end
