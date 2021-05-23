/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKImageBrush.h>

@class NSString;

@interface GKMacGameIconBrush : GKImageBrush

{
    struct CGSize _outputSize;
}

@property (nonatomic) struct CGSize outputSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)sizeForInput:(id)arg1;
- (id)renderedImageIdentifier;

@end
