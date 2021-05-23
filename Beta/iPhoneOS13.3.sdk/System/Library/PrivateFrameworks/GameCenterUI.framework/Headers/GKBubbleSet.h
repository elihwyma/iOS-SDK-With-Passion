/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKBubbleFlowBubbleControl, NSArray, NSString;

@interface GKBubbleSet : NSObject

{
    GKBubbleFlowBubbleControl *_bubbleControls[12];
    long long _supportedBubbles;
    NSString *_debuggingTag;
}

@property (nonatomic) long long supportedBubbles;
@property (nonatomic, readonly) NSArray *bubbleControls;
@property (retain, nonatomic) NSString *debuggingTag;

+ (id)setWithBubbleTypes:(long long)arg1;
+ (id)setWithBubbleControls:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateBubbleVisibilityAccordingToSupportedBubblesMask;
- (id)bubbleForType:(long long)arg1;
- (id)subsetWithBubbleTypes:(long long)arg1;
- (void)syncBubbleMeshAnimationStateFromSet:(id)arg1;
- (void)hideAllBubbleControls;
- (void)setAllContentAlpha:(double)arg1;
- (void)animateOutWithFocus:(long long)arg1 viewsToFadeOut:(id)arg2 effectiveView:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
