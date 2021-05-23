/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSDate, NSString, SBFloatingDockController;

@interface SBFloatingDockBehaviorAssertion : NSObject <Swift>

{
    _Bool _animated;
    _Bool _gesturePossible;
    unsigned long long _level;
    double _progress;
    NSString *_reason;
    NSDate *_timestamp;
    SBFloatingDockController *_floatingDockController;
}

@property (weak, nonatomic, readonly) SBFloatingDockController *floatingDockController;
@property (nonatomic, readonly) unsigned long long level;
@property (nonatomic, readonly, getter=isAnimated) _Bool animated;
@property (nonatomic, readonly, getter=isPinned) _Bool pinned;
@property (nonatomic, readonly) _Bool gesturePossible;
@property (nonatomic, readonly) double progress;
@property (copy, nonatomic, readonly) NSString *reason;
@property (copy, nonatomic, readonly) NSDate *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)invalidateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPinned:(_Bool)arg1 gesturePossible:(_Bool)arg2 atLevel:(unsigned long long)arg3 reason:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)initWithFloatingDockController:(id)arg1 visibleProgress:(double)arg2 animated:(_Bool)arg3 gesturePossible:(_Bool)arg4 atLevel:(unsigned long long)arg5 reason:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;
- (void)modifyProgress:(double)arg1 interactive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithVisibleProgress:(double)arg1 gesturePossible:(_Bool)arg2 atLevel:(unsigned long long)arg3 reason:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;

@end
