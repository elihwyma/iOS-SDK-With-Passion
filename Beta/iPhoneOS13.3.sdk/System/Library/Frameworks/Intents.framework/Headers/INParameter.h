/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

@interface INParameter : NSObject <Swift>

{
    NSMutableDictionary *_indexesForSubKeyPaths;
    Class _parameterClass;
    NSString *_parameterKeyPath;
}

@property (retain, nonatomic) Class parameterClass;
@property (copy, nonatomic) NSString *parameterKeyPath;
@property (retain, nonatomic) NSMutableDictionary *_indexesForSubKeyPaths;
@property (copy, nonatomic, readonly) NSString *_subscriptedKeyPath;

+ (_Bool)supportsSecureCoding;
+ (id)parameterForClass:(Class)arg1 keyPath:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (_Bool)isEqualToParameter:(id)arg1;
- (void)setIndex:(unsigned long long)arg1 forSubKeyPath:(id)arg2;
- (unsigned long long)indexForSubKeyPath:(id)arg1;
- (id)_valueOfObject:(id)arg1 forRemainingKeyPath:(id)arg2 inFullyQualifiedKeyPath:(id)arg3;
- (id)_sanitizedKeyPathForKeyPath:(id)arg1 removingSubscripts:(_Bool)arg2;
- (void)_setIndexesForKeyPathWithSubscripts:(id)arg1;
- (id)_parameterValueForParameterizedObject:(id)arg1;
- (id)parameterValue;
- (id)parameterizedObject;

@end
