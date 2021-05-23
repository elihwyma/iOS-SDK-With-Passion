/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INCodableAttribute, NSString;

@interface INCodableAttributeDialog : NSObject <Swift>

{
    _Bool _defaultDialog;
    INCodableAttribute *_codableAttribute;
    NSString *_formatString;
    NSString *_formatStringID;
}

@property (weak, nonatomic, setter=_setCodableAttribute:) INCodableAttribute *_codableAttribute;
@property (copy, nonatomic) NSString *formatString;
@property (copy, nonatomic) NSString *formatStringID;
@property (nonatomic, getter=isDefaultDialog) _Bool defaultDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *cacheGroup;
@property (copy, nonatomic, readonly) NSString *keyPrefix;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2;
- (id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 forLanguage:(id)arg3;

@end
