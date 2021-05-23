/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKImageBrush.h>

@class NSString;

@interface GKCircleImageBrush : GKImageBrush

{
    struct CGSize _sizeOverride;
}

@property (nonatomic) struct CGSize sizeOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)sizeForInput:(id)arg1;
- (id)renderedImageIdentifier;
- (double)scaleForInput:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;

@end
