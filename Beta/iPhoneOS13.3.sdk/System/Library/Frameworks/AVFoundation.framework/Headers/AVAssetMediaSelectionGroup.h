/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMediaSelectionGroup.h>

@class AVAsset, AVMediaSelectionOption, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup

{
    AVAsset *_asset;
    NSDictionary *_dictionary;
    NSArray *_groupMediaCharacteristics;
    NSArray *_options;
    AVMediaSelectionOption *_defaultOption;
    _Bool _isStreamingGroup;
}

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)options;
- (id)dictionary;
- (id)asset;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (_Bool)_isStreamingGroup;
- (id)defaultOption;
- (id)initWithAsset:(id)arg1 dictionary:(id)arg2;
- (id)_groupMediaCharacteristics;
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(_Bool)arg2;
- (id)_optionWithID:(id)arg1 identifier:(id)arg2 source:(id)arg3 displaysNonForcedSubtitles:(_Bool)arg4;

@end
