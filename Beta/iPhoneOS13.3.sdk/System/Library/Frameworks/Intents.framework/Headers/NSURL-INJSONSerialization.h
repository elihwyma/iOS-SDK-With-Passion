/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (INJSONSerialization)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;

@end
