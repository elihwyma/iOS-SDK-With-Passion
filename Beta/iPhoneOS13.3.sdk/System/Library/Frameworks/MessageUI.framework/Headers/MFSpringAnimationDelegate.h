/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MFSpringAnimationDelegate : NSObject

{
    NSMutableArray *_completionBlocks;
}

@property (nonatomic, readonly) NSMutableArray *completionBlocks;

- (id)init;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

@end
