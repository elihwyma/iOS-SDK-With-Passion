/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSNumber, NSString;

@interface INWellnessMetadataPair : NSObject <Swift>

{
    NSString *_key;
    NSNumber *_numberValue;
    NSString *_stringValue;
}

@property (copy, nonatomic, readonly) NSString *key;
@property (copy, nonatomic, readonly) NSNumber *numberValue;
@property (copy, nonatomic, readonly) NSString *stringValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithNumber:(id)arg1 key:(id)arg2;
- (id)initWithString:(id)arg1 key:(id)arg2;

@end
