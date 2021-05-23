/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKImageBrush.h>

@class NSString;

@interface GKAvatarImageBrush : GKImageBrush

{
    long long _dimension;
}

@property (nonatomic) long long dimension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)renderedImageIdentifier;

@end
