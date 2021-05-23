/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class EFSQLGeneratorTableRelationship, NSArray, NSString;

@interface EFSQLExpressionGenerator : NSObject

{
    _Bool _includeSourceColumn;
    EFSQLGeneratorTableRelationship *_tableRelationship;
    NSArray *_whereExpression;
    NSArray *_additionalSelectColumns;
    NSString *_alias;
    EFSQLExpressionGenerator *_previousExpressionGenerator;
}

@property (nonatomic, readonly) EFSQLGeneratorTableRelationship *tableRelationship;
@property (nonatomic, readonly) NSArray *whereExpression;
@property (nonatomic, readonly) NSArray *additionalSelectColumns;
@property (nonatomic) _Bool includeSourceColumn;
@property (copy, nonatomic) NSString *alias;
@property (nonatomic, readonly) EFSQLExpressionGenerator *previousExpressionGenerator;

+ (id)tableFromPreviousTable:(id)arg1 propertyMapper:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3 additionalSelectColumns:(id)arg4 includeSourceColumn:(_Bool)arg5;
- (_Bool)isEqualToEFSQLExpressionGenerator:(id)arg1;
- (id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3;
- (void)assignAliasWithMap:(id)arg1;
- (id)joinOnGenerator;
- (id)columnAlias;

@end
