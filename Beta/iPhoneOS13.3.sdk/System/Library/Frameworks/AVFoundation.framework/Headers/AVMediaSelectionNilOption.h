/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVWeakReference, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionNilOption : AVMediaSelectionOption

{
    id _groupID;
    id _groupMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    _Bool _displaysNonForcedSubtitles;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)dictionary;
- (id)group;
- (id)_groupID;
- (id)initWithGroup:(id)arg1;
- (_Bool)isPlayable;
- (_Bool)_representsNilSelection;
- (id)_groupMediaType;

@end
