/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <VoiceShortcuts/Swift-Protocol.h>

@class NSDictionary;

@protocol MTLModel <Swift>

@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (unsigned short)propertyKeys;
+ (unsigned short)modelWithDictionary:error: /* Error: Ran out of types for this method. */;

- (unsigned short)validate: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithDictionary:error: /* Error: Ran out of types for this method. */;
- (unsigned short)mergeValueForKey:fromModel: /* Error: Ran out of types for this method. */;

@end
