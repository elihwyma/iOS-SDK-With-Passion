/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, UITouch;

__attribute__((visibility("hidden")))
@interface _UIEstimatedTouchRecord : NSObject

{
    NSMutableArray *_touchables;
    UITouch *_liveTouch;
    UITouch *_frozenTouch;
    NSNumber *_contextID;
}

@property (nonatomic, readonly) UITouch *liveTouch;
@property (nonatomic, readonly) UITouch *frozenTouch;
@property (nonatomic, readonly) NSArray *touchables;
@property (nonatomic, readonly) NSNumber *contextID;

- (id)initWithLiveTouch:(id)arg1 freezeTouch:(id)arg2 contextID:(id)arg3;
- (void)addTouchable:(id)arg1;
- (void)removeTouchable:(id)arg1;
- (void)dispatchUpdateWithPressure:(double)arg1 stillEstimated:(_Bool)arg2;

@end
