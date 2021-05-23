/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol INCodableCoding <Swift>

@property (copy, nonatomic, readonly) NSString *cacheGroup;
@property (copy, nonatomic, readonly) NSString *keyPrefix;

- (unsigned short)dictionaryRepresentation;
- (unsigned short)dictionaryKeyForKeyPath: /* Error: Ran out of types for this method. */;
- (unsigned short)updateWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)dictionaryRepresentationForLanguage: /* Error: Ran out of types for this method. */;

@end
