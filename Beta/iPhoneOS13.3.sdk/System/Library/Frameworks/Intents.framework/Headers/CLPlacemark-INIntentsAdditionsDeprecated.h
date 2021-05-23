/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <CoreLocation/CLPlacemark.h>

@class NSString;

@interface CLPlacemark (INIntentsAdditionsDeprecated)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (id)placemarkWithLocation:(id)arg1 name:(id)arg2 postalAddress:(id)arg3;

- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)initIntentPlacemarkWithLocation:(id)arg1 addressDictionary:(id)arg2;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)_intents_defaultReadableDescription;
- (_Bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (id)_intents_indexingRepresentation;

@end
