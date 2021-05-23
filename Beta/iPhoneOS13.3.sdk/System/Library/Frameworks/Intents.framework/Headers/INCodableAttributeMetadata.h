/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INCodableAttribute, INCodableLocalizationTable, NSString;

@interface INCodableAttributeMetadata : NSObject <Swift>

{
    NSString *_name;
    NSString *_placeholder;
    NSString *_placeholderID;
    INCodableAttribute *_codableAttribute;
}

@property (weak, nonatomic, readonly) INCodableAttribute *codableAttribute;
@property (copy, nonatomic, readonly) INCodableLocalizationTable *_localizationTable;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *placeholderID;
@property (copy, nonatomic, readonly) NSString *localizedPlaceholder;
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
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)_localizedDialogTokensForLanguage:(id)arg1;
- (id)initWithName:(id)arg1 codableAttribute:(id)arg2;
- (id)localizedPlaceholderForLanguage:(id)arg1;

@end
