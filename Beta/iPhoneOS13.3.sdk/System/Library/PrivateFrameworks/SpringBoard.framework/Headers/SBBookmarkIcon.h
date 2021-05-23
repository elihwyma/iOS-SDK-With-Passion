/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardHome/SBLeafIcon.h>

@class NSURL, SBBookmark, UIWebClip;

@interface SBBookmarkIcon : SBLeafIcon

{
    SBBookmark *_bookmark;
}

@property (nonatomic, readonly) SBBookmark *bookmark;
@property (nonatomic, readonly) UIWebClip *webClip;
@property (nonatomic, readonly) NSURL *launchURL;
@property (nonatomic, readonly) _Bool displaysShareBookmarkShortcutItem;
@property (nonatomic, readonly) _Bool representsWebApp;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBookmark:(id)arg1;
- (id)representedSceneIdentifier;
- (id)folderTitleOptions;
- (id)folderFallbackTitle;
- (_Bool)isBookmarkIcon;
- (id)applicationToLaunch;

@end
