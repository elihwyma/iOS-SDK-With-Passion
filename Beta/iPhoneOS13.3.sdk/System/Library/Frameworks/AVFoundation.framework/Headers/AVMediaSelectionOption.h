/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVMediaSelectionOptionInternal, NSArray, NSLocale, NSString;

@interface AVMediaSelectionOption : NSObject

{
    AVMediaSelectionOptionInternal *_mediaSelectionOption;
}

@property (nonatomic, readonly) int trackID;
@property (nonatomic, readonly) NSString *unicodeLanguageIdentifier;
@property (nonatomic, readonly) NSString *unicodeLanguageCode;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) NSArray *mediaSubTypes;
@property (nonatomic, readonly, getter=isPlayable) _Bool playable;
@property (nonatomic, readonly) NSString *extendedLanguageTag;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSArray *commonMetadata;
@property (nonatomic, readonly) NSArray *availableMetadataFormats;
@property (nonatomic, readonly) NSString *displayName;

+ (_Bool)_plistHasOptionIdentifier:(id)arg1;
+ (id)mediaSelectionNilOptionForGroup:(id)arg1;
+ (id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(_Bool)arg4;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionary;
- (id)languageCode;
- (id)propertyList;
- (id)group;
- (id)_groupID;
- (id)_title;
- (id)initWithGroup:(id)arg1;
- (_Bool)hasMediaCharacteristic:(id)arg1;
- (id)metadataForFormat:(id)arg1;
- (id)optionID;
- (id)outOfBandIdentifier;
- (id)outOfBandSource;
- (id)track;
- (id)mediaCharacteristics;
- (id)_track;
- (_Bool)_representsNilSelection;
- (id)_ancillaryDescription;
- (_Bool)_isAuxiliaryContent;
- (_Bool)_isDesignatedDefault;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (_Bool)displaysNonForcedSubtitles;
- (id)_groupMediaType;
- (id)_groupMediaCharacteristics;
- (id)fallbackIDs;
- (id)_taggedMediaCharacteristics;
- (id)associatedExtendedLanguageTag;
- (id)associatedPersistentIDs;
- (_Bool)_isMainProgramContent;
- (id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(_Bool)arg2;
- (id)_displayNameWithLocale:(id)arg1 fallingBackToMatchingUndeterminedAndMultilingual:(_Bool)arg2;
- (id)associatedUnicodeLanguageIdentifier;
- (id)displayNameWithLocale:(id)arg1;

@end
