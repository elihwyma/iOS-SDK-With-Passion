/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVMetadataItemInternal, NSData, NSDate, NSDictionary, NSLocale, NSNumber, NSString;

@protocol NSObject><NSCopying;

@interface AVMetadataItem : NSObject

{
    AVMetadataItemInternal *_priv;
}

@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) NSNumber *numberValue;
@property (nonatomic, readonly) NSDate *dateValue;
@property (nonatomic, readonly) NSData *dataValue;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *extendedLanguageTag;
@property (copy, nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) CDStruct_1b6d18a9 time;
@property (nonatomic, readonly) CDStruct_1b6d18a9 duration;
@property (copy, nonatomic, readonly) NSString *dataType;
@property (copy, nonatomic, readonly) id <NSObject><NSCopying> value;
@property (copy, nonatomic, readonly) NSDictionary *extraAttributes;

+ (void)initialize;
+ (id)metadataItemsFromArray:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3;
+ (id)metadataItemsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2;
+ (id)identifierForKey:(id)arg1 keySpace:(id)arg2;
+ (id)keySpaceForIdentifier:(id)arg1;
+ (id)keyForIdentifier:(id)arg1;
+ (id)_metadataItemWithFigMetadataDictionary:(id)arg1 containerURL:(id)arg2 securityOptions:(unsigned int)arg3;
+ (_Bool)_clientExpectsISOUserDataKeysInQuickTimeUserDataKeySpace;
+ (id)_isoUserDataKeysRequiringKeySpaceConversion;
+ (id)_replaceQuickTimeUserDataKeySpaceWithISOUserDataKeySpaceIfRequired:(id)arg1;
+ (id)dataTypeForValue:(id)arg1;
+ (id)metadataItemsFromArray:(id)arg1 withLocale:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 filteredByIdentifier:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 withStringValue:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 filteredByMetadataItemFilter:(id)arg2;
+ (id)_metadataItemWithFigMetadataDictionary:(id)arg1;
+ (id)_figMetadataPropertyFromMetadataItems:(id)arg1;
+ (id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(CDUnknownBlockType)arg2;
+ (id)metadataItemsFromArray:(id)arg1 filteredByIdentifiers:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)key;
- (id)languageCode;
- (id)startDate;
- (void)_updateIdentifier;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelLoading;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (id)keySpace;
- (id)commonKey;
- (id)discoveryTimestamp;
- (void)_extractPropertiesFromDictionary:(id)arg1;
- (id)_valueFromCFType:(void *)arg1;
- (void)_updateCommonKey;
- (void)_makeValueReady;
- (void)_makePropertiesReady;
- (void)_updateLanguageInformationFromLocale:(id)arg1;
- (void)_updateLanguageInformationFromExtendedLanguageTag:(id)arg1;
- (id)_keyAsString;
- (struct CGImage *)imageValue;
- (id)unicodeLanguageIdentifier;
- (id)unicodeLanguageCode;
- (id)_initWithFigMetadataDictionary:(id)arg1;
- (id)_figMetadataDictionary;
- (id)intrinsicAttributesOfExtraAttributes:(id)arg1;
- (_Bool)_areExtraAttributesOf:(id)arg1 comparableToExtraAttributesOf:(id)arg2;
- (void *)_copyValueAsCFTypeWithFormatDescription:(struct opaqueCMFormatDescription *)arg1 error:(id *)arg2;
- (id)_figMetadataDictionaryWithValue:(_Bool)arg1 diviningValueDataType:(_Bool)arg2;
- (id)_serializationDataType;
- (id)_conformingDataTypes;
- (id)_createJSONEncodedDataFromValue:(id)arg1 error:(id *)arg2;
- (id)_figMetadataFormat;
- (id)_initWithReader:(struct OpaqueFigMetadataReader *)arg1 itemIndex:(long long)arg2;
- (id)_figMetadataSpecificationReturningError:(id *)arg1;

@end
