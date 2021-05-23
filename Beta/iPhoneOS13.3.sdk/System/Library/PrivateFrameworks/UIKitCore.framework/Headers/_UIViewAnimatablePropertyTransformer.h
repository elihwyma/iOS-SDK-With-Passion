/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, _UICompoundObjectMap;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewAnimatablePropertyTransformer : NSObject

{
    _Bool _presentationValueCallbackRan;
    NSObject<OS_dispatch_queue> *_lockingQueue;
    CDUnknownBlockType _modelValueChangedCallback;
    CDUnknownBlockType _presentationValueChangedCallback;
    CDUnknownBlockType _stabilizedCallback;
    _UICompoundObjectMap *_capturedProperties;
    NSMutableSet *_runningProgresses;
}

@property (copy, nonatomic) CDUnknownBlockType modelValueChangedCallback;
@property (copy, nonatomic) CDUnknownBlockType presentationValueChangedCallback;
@property (copy, nonatomic) CDUnknownBlockType stabilizedCallback;
@property (retain, nonatomic) _UICompoundObjectMap *capturedProperties;
@property (retain, nonatomic) NSMutableSet *runningProgresses;

- (void)modelValueUpdatedForProgress:(id)arg1;
- (void)performWithLock:(CDUnknownBlockType)arg1;
- (void)presentationValueUpdatedForProgress:(id)arg1;
- (void)presentationValueStabilizedForProgress:(id)arg1;
- (void)progressInvalidated:(id)arg1;
- (id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3 stabilizedCallback:(CDUnknownBlockType)arg4 allowsProgressAnimatableProperties:(_Bool)arg5;
- (id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3 stabilizedCallback:(CDUnknownBlockType)arg4;
- (id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3;
- (id)initWithProgressAnimatableProperty:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3;
- (id)initWithInputAnimatableProperties:(id)arg1 presentationValueChangedCallback:(CDUnknownBlockType)arg2;

@end
