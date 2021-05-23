/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVMediaSelectionGroupInternal, AVMediaSelectionOption, NSArray;

@interface AVMediaSelectionGroup : NSObject

{
    AVMediaSelectionGroupInternal *_mediaSelectionGroup;
}

@property (nonatomic, readonly) NSArray *options;
@property (nonatomic, readonly) AVMediaSelectionOption *defaultOption;
@property (nonatomic, readonly) _Bool allowsEmptySelection;

+ (id)playableMediaSelectionOptionsFromArray:(id)arg1;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withMediaCharacteristics:(id)arg2;
+ (id)mediaSelectionGroupWithAsset:(id)arg1 dictionary:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withLocale:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withoutMediaCharacteristics:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionary;
- (id)_groupID;
- (id)asset;
- (id)_weakReference;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (_Bool)_isStreamingGroup;
- (_Bool)_matchesGroupID:(id)arg1 mediaType:(id)arg2;
- (id)_groupMediaType;
- (id)_groupMediaCharacteristics;
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(_Bool)arg2;

@end
