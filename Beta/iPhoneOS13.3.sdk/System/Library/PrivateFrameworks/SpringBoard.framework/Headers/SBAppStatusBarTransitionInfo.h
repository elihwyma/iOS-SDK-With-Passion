/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class UIStatusBarStyleRequest;

@interface SBAppStatusBarTransitionInfo : NSObject

{
    UIStatusBarStyleRequest *_startStyleRequest;
    long long _startOrientation;
    UIStatusBarStyleRequest *_endStyleRequest;
    long long _endOrientation;
    int _transition;
    _Bool _zoomOther;
}

@property (copy, nonatomic) UIStatusBarStyleRequest *startStyleRequest;
@property (nonatomic) long long startOrientation;
@property (copy, nonatomic) UIStatusBarStyleRequest *endStyleRequest;
@property (nonatomic) long long endOrientation;
@property (nonatomic) int transition;
@property (nonatomic) _Bool zoomOther;

- (id)description;

@end
