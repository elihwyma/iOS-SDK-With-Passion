/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMBufferObservance : NSObject

{
    _Bool _removedOnceEnabled;
    _Bool _fulfilled;
    _Bool _enabled;
    CDUnknownBlockType _predicate;
}

@property (nonatomic, getter=isFulfilled) _Bool fulfilled;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly, getter=isRemovedOnceEnabled) _Bool removedOnceEnabled;
@property (copy, nonatomic, readonly) CDUnknownBlockType predicate;

- (_Bool)shouldBeFulfilledByChange:(id)arg1;
- (id)initWithPredicate:(CDUnknownBlockType)arg1 removedOnceEnabled:(_Bool)arg2;
- (void)setupObservanceForBuffer:(id)arg1;
- (void)teardownObservanceForBuffer:(id)arg1;
- (void)fulfillWithChange:(id)arg1;

@end
