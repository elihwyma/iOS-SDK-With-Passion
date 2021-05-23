/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSExpression.h>

@interface NSFetchRequestExpression : NSExpression

{
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
    NSExpression *_fetchRequest;
    NSExpression *_managedObjectContext;
    struct _fetchExpressionFlags {
        unsigned int isCountOnly:1;
        unsigned int _RESERVED:31;
    } _flags;
}

@property (readonly) NSExpression *requestExpression;
@property (readonly) NSExpression *contextExpression;
@property (readonly, getter=isCountOnlyRequest) _Bool countOnlyRequest;

+ (_Bool)supportsSecureCoding;
+ (id)expressionForFetch:(id)arg1 context:(id)arg2 countOnly:(_Bool)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)predicateFormat;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)initForFetch:(id)arg1 context:(id)arg2 countOnly:(_Bool)arg3;
- (id)_keypathsForDerivedPropertyValidation:(id *)arg1;

@end
