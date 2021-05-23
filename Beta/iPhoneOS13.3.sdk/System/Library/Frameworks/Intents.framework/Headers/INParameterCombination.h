/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INCodableLocalizationTable, NSString;

@interface INParameterCombination : NSObject <Swift>

{
    _Bool _primary;
    _Bool _supportsBackgroundExecution;
    INCodableLocalizationTable *_localizationTable;
    NSString *_titleFormatString;
    NSString *_titleFormatStringLocID;
    NSString *_subtitleFormatString;
    NSString *_subtitleFormatStringLocID;
}

@property (copy, nonatomic, setter=_setLocalizationTable:) INCodableLocalizationTable *_localizationTable;
@property (nonatomic, getter=isPrimary) _Bool primary;
@property (nonatomic) _Bool supportsBackgroundExecution;
@property (copy, nonatomic) NSString *titleFormatString;
@property (copy, nonatomic) NSString *titleFormatStringLocID;
@property (copy, nonatomic) NSString *subtitleFormatString;
@property (copy, nonatomic) NSString *subtitleFormatStringLocID;
@property (copy, nonatomic, readonly) NSString *localizedTitleFormatString;
@property (copy, nonatomic, readonly) NSString *localizedSubtitleFormatString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *cacheGroup;
@property (copy, nonatomic, readonly) NSString *keyPrefix;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)_dictionaryRepresentation;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)localizedTitleFormatStringForLanguage:(id)arg1;
- (id)localizedSubtitleFormatStringForLanguage:(id)arg1;

@end
