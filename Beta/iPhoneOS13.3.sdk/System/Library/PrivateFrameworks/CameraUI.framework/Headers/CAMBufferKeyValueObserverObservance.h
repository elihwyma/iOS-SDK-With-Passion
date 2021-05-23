/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMBufferObservance.h>

@class NSObject, NSString;

@interface CAMBufferKeyValueObserverObservance : CAMBufferObservance

{
    NSObject *_object;
    NSString *_keyPath;
}

@property (weak, nonatomic, readonly) NSObject *object;
@property (copy, nonatomic, readonly) NSString *keyPath;

- (_Bool)shouldBeFulfilledByChange:(id)arg1;
- (void)setupObservanceForBuffer:(id)arg1;
- (void)teardownObservanceForBuffer:(id)arg1;
- (id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withPredicate:(CDUnknownBlockType)arg3 removedOnceEnabled:(_Bool)arg4;

@end
