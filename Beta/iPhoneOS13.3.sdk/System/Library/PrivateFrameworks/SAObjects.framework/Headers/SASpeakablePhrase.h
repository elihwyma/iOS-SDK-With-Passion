/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SASpeakablePhrase : SADomainObject

@property (copy, nonatomic) NSString *phrase;
@property (copy, nonatomic) NSString *pronunciation;

+ (id)speakablePhrase;
+ (id)speakablePhraseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
