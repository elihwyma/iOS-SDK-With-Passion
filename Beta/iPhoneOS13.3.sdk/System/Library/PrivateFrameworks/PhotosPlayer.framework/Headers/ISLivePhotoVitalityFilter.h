/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@protocol ISVitalitySettings;

__attribute__((visibility("hidden")))
@interface ISLivePhotoVitalityFilter : NSObject

{
    _Bool _isPerformingInputChanges;
    _Bool __shouldUpdateOutput;
    id <ISVitalitySettings> _settings;
    long long _state;
    CDUnknownBlockType _outputChangeHandler;
}

@property (nonatomic, setter=_setPerformingInputChanges:) _Bool isPerformingInputChanges;
@property (nonatomic, setter=_setShouldUpdateOutput:) _Bool _shouldUpdateOutput;
@property (nonatomic, readonly) id <ISVitalitySettings> settings;
@property (nonatomic, readonly) long long state;
@property (copy, nonatomic) CDUnknownBlockType outputChangeHandler;

- (id)init;
- (void)setState:(long long)arg1;
- (id)initWithSettings:(id)arg1;
- (void)invalidateOutput;
- (void)updateOutput;
- (void)performInputChanges:(CDUnknownBlockType)arg1;

@end
