/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMediaSelectionGroup.h>

@class AVAssetWriterInput, AVAssetWriterInputGroupInternal, NSArray;

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup

{
    AVAssetWriterInputGroupInternal *_internal;
}

@property (nonatomic, readonly) NSArray *provisionalInputs;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) AVAssetWriterInput *defaultInput;

+ (id)assetWriterInputGroupWithInputs:(id)arg1 defaultInput:(id)arg2;
+ (id)assetWriterInputGroupWithInputs:(id)arg1 provisionalInputs:(id)arg2 defaultInput:(id)arg3;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)options;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (id)initWithInputs:(id)arg1 defaultInput:(id)arg2;
- (void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
- (void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
- (id)initWithInputs:(id)arg1 provisionalInputs:(id)arg2 defaultInput:(id)arg3;

@end
