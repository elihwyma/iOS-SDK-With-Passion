/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _UIFocusLinearMovementSequence : NSObject

{
    _Bool _looping;
    _Bool _restrictEnteringSequence;
    NSArray *_items;
}

@property (copy, nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly, getter=isLooping) _Bool looping;
@property (nonatomic, readonly, getter=restrictsEnteringSequence) _Bool restrictEnteringSequence;

+ (id)sequenceWithItems:(id)arg1 loops:(_Bool)arg2 restrictEnteringSequence:(_Bool)arg3;
+ (id)sequenceWithItems:(id)arg1 loops:(_Bool)arg2;

- (id)init;
- (id)initWithItems:(id)arg1 loops:(_Bool)arg2 restrictEnteringSequence:(_Bool)arg3;
- (id)initWithItems:(id)arg1 loops:(_Bool)arg2;

@end
