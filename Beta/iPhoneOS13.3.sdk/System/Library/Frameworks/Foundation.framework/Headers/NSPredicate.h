/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSString;

@interface NSPredicate : NSObject <Swift>

{
    struct _predicateFlags {
        unsigned int _evaluationBlocked:1;
        unsigned int _reservedPredicateFlags:31;
    } _predicateFlags;
    unsigned int reserved;
}

@property (copy, readonly) NSString *predicateFormat;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)predicateWithValue:(_Bool)arg1;
+ (id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned long long)arg2;
+ (struct __CFLocale *)retainedLocale;
+ (id)predicateWithFormat:(id)arg1 arguments:(char *)arg2;
+ (id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2;
+ (id)predicateWithFormat:(id)arg1;
+ (id)predicateWithBlock:(CDUnknownBlockType)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_validateForMetadataQueryScopes:(id)arg1;
- (id)generateMetadataDescription;
- (void)allowEvaluation;
- (_Bool)_allowsEvaluation;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (_Bool)evaluateWithObject:(id)arg1;

@end
