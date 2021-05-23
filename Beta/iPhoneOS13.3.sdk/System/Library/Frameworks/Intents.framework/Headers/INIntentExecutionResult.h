/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INIntent, INIntentResponse;

@interface INIntentExecutionResult : NSObject <Swift>

{
    INIntent *_intent;
    INIntentResponse *_intentResponse;
}

@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) INIntentResponse *intentResponse;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)initWithIntent:(id)arg1 response:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;

@end
