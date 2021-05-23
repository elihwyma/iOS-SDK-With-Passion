/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSNumber.h>

@class NSString;

@interface NSNumber (Readable)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (_Bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (_Bool)_intents_isInteger;
- (_Bool)_intents_isDouble;

@end
