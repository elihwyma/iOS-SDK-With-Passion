/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSString;

@interface PXNumberFilter : PXObservable

{
    struct {
        _Bool output;
    } _needsUpdateFlags;
    double _input;
    double _time;
    double _output;
    double _lastTime;
}

@property (nonatomic, setter=_setOutput:) double output;
@property (nonatomic, readonly) double currentTime;
@property (nonatomic, readonly) double lastTime;
@property (nonatomic, readonly) double input;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double time;

- (id)init;
- (void)setInput:(double)arg1;
- (_Bool)_needsUpdate;
- (id)initWithInput:(double)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (double)updatedOutput;
- (double)initialOutputForInput:(double)arg1;
- (void)_updateIfNeeded;
- (void)_invalidateOutput;
- (void)_updateOutputIfNeeded;
- (void)_setLastTime:(double)arg1;
- (void)invalidateOutput;

@end
