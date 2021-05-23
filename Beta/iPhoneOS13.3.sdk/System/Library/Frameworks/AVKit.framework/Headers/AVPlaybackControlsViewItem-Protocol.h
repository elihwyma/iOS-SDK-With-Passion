/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVKit/Swift-Protocol.h>

@protocol AVPlaybackControlsViewItem <Swift>

@property (nonatomic) struct CGSize extrinsicContentSize;
@property (nonatomic, getter=isRemoved) _Bool removed;
@property (nonatomic, getter=isCollapsed) _Bool collapsed;
@property (nonatomic, getter=isIncluded) _Bool included;
@property (nonatomic, readonly, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;
@property (nonatomic) _Bool hasAlternateAppearance;
@property (nonatomic) _Bool hasFullScreenAppearance;

@end
