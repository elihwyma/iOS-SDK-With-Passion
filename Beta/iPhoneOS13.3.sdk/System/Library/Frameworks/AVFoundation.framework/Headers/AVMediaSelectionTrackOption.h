/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVAssetTrack, AVWeakReference, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionTrackOption : AVMediaSelectionOption

{
    id _groupID;
    AVAssetTrack *_track;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    _Bool _displaysNonForcedSubtitles;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dictionary;
- (id)locale;
- (int)trackID;
- (id)mediaType;
- (id)group;
- (id)_groupID;
- (id)metadataForFormat:(id)arg1;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (_Bool)isPlayable;
- (id)track;
- (id)_track;
- (id)mediaSubTypes;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (_Bool)displaysNonForcedSubtitles;
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;

@end
