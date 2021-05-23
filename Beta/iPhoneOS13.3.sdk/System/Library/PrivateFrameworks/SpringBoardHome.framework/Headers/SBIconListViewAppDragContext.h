/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@interface SBIconListViewAppDragContext : NSObject

{
    _Bool _hasPaused;
    NSTimer *_pauseTimer;
    struct CGPoint _pausePoint;
}

@property (retain, nonatomic) NSTimer *pauseTimer;
@property (nonatomic) struct CGPoint pausePoint;
@property (nonatomic) _Bool hasPaused;

@end
