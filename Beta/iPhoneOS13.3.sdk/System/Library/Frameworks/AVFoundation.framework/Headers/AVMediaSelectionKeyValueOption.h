/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVWeakReference, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption

{
    id _groupID;
    id _groupMediaType;
    NSString *_optionMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    _Bool _displaysNonForcedSubtitles;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dictionary;
- (id)locale;
- (id)mediaType;
- (id)group;
- (id)_groupID;
- (id)metadataForFormat:(id)arg1;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (_Bool)isPlayable;
- (id)_groupMediaType;
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;

@end
