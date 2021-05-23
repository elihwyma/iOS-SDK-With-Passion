/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface SBSceneBackgroundedStatusAssertion : NSObject

{
    NSSet *_scenes;
    CDUnknownBlockType _invalidationHandler;
}

@property (copy, nonatomic, readonly) NSSet *scenes;

- (void)dealloc;
- (void)invalidate;
- (id)initWithScenes:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;

@end
