/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INIntentResponseCodableDescription, NSArray, NSString;

@interface INIntentResponseCodableCode : NSObject <Swift>

{
    _Bool _success;
    long long _value;
    NSString *_name;
    NSString *_formatString;
    NSString *_formatStringLocID;
    NSString *_conciseFormatString;
    NSString *_conciseFormatStringLocID;
    INIntentResponseCodableDescription *__responseCodableDescription;
}

@property (weak, nonatomic, setter=_setResponseCodableDescription:) INIntentResponseCodableDescription *_responseCodableDescription;
@property (nonatomic) long long value;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isSuccess) _Bool success;
@property (copy, nonatomic) NSString *formatString;
@property (copy, nonatomic) NSString *formatStringLocID;
@property (copy, nonatomic) NSString *conciseFormatString;
@property (copy, nonatomic) NSString *conciseFormatStringLocID;
@property (nonatomic, readonly) NSArray *parameterNames;
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
- (id)_parameterNamesFromString:(id)arg1;

@end
