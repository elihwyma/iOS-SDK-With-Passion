/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface SBBlurViewCoordinator : NSObject

{
    NSArray *_elementVCs;
    unsigned long long _state;
    NSMutableDictionary *_mapStateToBlocks;
}

@property (nonatomic, readonly) NSArray *viewControllers;
@property (nonatomic, readonly, getter=isBlurred) _Bool blurred;
@property (nonatomic, readonly) unsigned long long state;

- (id)init;
- (id)description;
- (void)_setState:(unsigned long long)arg1;
- (id)initWithElementViewControllers:(id)arg1;
- (void)setBlurred:(_Bool)arg1 withAnimationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fireBlocksForState:(unsigned long long)arg1;
- (void)addNotifyBlock:(CDUnknownBlockType)arg1 forState:(unsigned long long)arg2;
- (void)removeNotifyBlock:(CDUnknownBlockType)arg1 forState:(unsigned long long)arg2;

@end
