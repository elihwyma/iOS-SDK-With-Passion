/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSObject (Readable)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (id)_intents_localizedCopyForLanguage:(id)arg1;
- (_Bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (_Bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)_intents_isValidKey:(id)arg1;
- (id)_intents_indexingRepresentation;
- (SEL)_intents_setterForPropertyWithName:(id)arg1;

@end
