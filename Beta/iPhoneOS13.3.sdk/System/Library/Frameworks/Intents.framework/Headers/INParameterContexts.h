/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface INParameterContexts : NSObject

{
    NSDictionary *_suggestedValuesDictionary;
    NSDictionary *_typedSuggestedValuesDictionary;
}

@property (retain, nonatomic, setter=_setSuggestedValuesDictionary:) NSDictionary *_suggestedValuesDictionary;
@property (retain, nonatomic, setter=_setTypedSuggestedValuesDictionary:) NSDictionary *_typedSuggestedValuesDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (_Bool)_isEmpty;
- (id)valueForUndefinedKey:(id)arg1;
- (void)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_initWithIntent:(id)arg1 decoder:(id)arg2 JSONDictionary:(id)arg3;
- (void)_updateSuggestedValuesForIntent:(id)arg1 decoder:(id)arg2 JSONDictionary:(id)arg3;

@end
