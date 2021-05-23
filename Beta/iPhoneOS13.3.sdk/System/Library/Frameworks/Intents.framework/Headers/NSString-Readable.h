/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSString.h>

@interface NSString (Readable)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (id)deferredLocalizedIntentsStringWithFormat:(id)arg1 fromTable:(id)arg2 arguments:(char *)arg3;
+ (id)deferredLocalizedIntentsStringWithFormat:(id)arg1;
+ (id)deferredLocalizedIntentsStringWithFormat:(id)arg1 fromTable:(id)arg2;
+ (id)deferredLocalizedIntentsStringWithFormat:(id)arg1 fromTable:(id)arg2 bundle:(id)arg3;

- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)_intents_localizedCopyForLanguage:(id)arg1;
- (_Bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (id)localizeForLanguage:(id)arg1;
- (id)_intents_encodeForProto;
- (id)_intents_decodeFromProto;

@end
