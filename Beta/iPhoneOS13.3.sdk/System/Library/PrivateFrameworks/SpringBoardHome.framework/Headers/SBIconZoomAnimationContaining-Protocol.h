/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/Swift-Protocol.h>

@class SBHIconModel, SBIconListView;

@protocol SBIconZoomAnimationContaining <Swift>

@property (nonatomic, readonly) SBHIconModel *iconModel;
@property (nonatomic, readonly) SBIconListView *currentIconListView;
@property (nonatomic, readonly) SBIconListView *dockIconListView;

@end
