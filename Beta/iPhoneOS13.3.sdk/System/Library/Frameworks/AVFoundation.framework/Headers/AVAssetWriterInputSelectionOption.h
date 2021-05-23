/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVAssetWriterInput, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption

{
    AVAssetWriterInput *_input;
    NSString *_mediaType;
    NSDictionary *_outputSettings;
    struct opaqueCMFormatDescription *_sourceFormatHint;
    NSString *_languageCode;
    NSString *_extendedLanguageTag;
    NSArray *_metadata;
    NSDictionary *_trackReferences;
    _Bool _displaysNonForcedSubtitles;
    _Bool _enabled;
}

@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) NSDictionary *outputSettings;
@property (nonatomic, readonly) struct opaqueCMFormatDescription *sourceFormatHint;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) NSString *extendedLanguageTag;
@property (nonatomic, readonly) NSArray *metadata;
@property (nonatomic, readonly) NSDictionary *trackReferences;
@property (nonatomic, readonly) _Bool displaysNonForcedSubtitles;
@property (nonatomic, readonly) AVAssetWriterInput *input;

+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(_Bool)arg2;
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)locale;
- (id)propertyList;
- (id)metadataForFormat:(id)arg1;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (_Bool)isPlayable;
- (id)initWithAssetWriterInput:(id)arg1;
- (id)initWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(_Bool)arg2;
- (_Bool)_hasEqualValueForKey:(id)arg1 asObject:(id)arg2;
- (id)_taggedCharacteristics;
- (id)_ancillaryDescription;
- (id)mediaSubTypes;
- (_Bool)_isAuxiliaryContent;
- (_Bool)_isDesignatedDefault;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;

@end
