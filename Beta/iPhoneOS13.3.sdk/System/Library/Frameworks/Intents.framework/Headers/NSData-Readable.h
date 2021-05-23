/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (Readable)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (void)_in_writeDataToPathForImage:(id)arg1 storeType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
