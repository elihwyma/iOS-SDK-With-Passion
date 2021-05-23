/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@interface SBIconAnimationContext : NSObject

{
    double _delay;
    double _fraction;
    CDUnknownBlockType _completion;
}

@property (nonatomic) double delay;
@property (nonatomic) double fraction;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
