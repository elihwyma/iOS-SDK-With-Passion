/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLRelationship, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLJoinIntermediate : NSSQLIntermediate

{
    NSSQLRelationship *_relationship;
    NSString *_sourceAlias;
    NSString *_destinationAlias;
    NSString *_correlationAlias;
    unsigned long long _type;
    _Bool _direct;
}

+ (id)createToOneJoinIntermediateForProperty:(id)arg1 lastStep:(id)arg2 inScope:(id)arg3 context:(id)arg4;
+ (id)createToManyJoinIntermediateForProperty:(id)arg1 lastStep:(id)arg2 inScope:(id)arg3 context:(id)arg4;
+ (id)createManyToManyJoinIntermediateForProperty:(id)arg1 direct:(_Bool)arg2 lastStep:(id)arg3 inScope:(id)arg4 context:(id)arg5;
+ (id)createJoinIntermediatesForKeypath:(id)arg1 startEntity:(id)arg2 startAlias:(id)arg3 forScope:(id)arg4 inStatementIntermediate:(id)arg5 inContext:(id)arg6;

- (void)dealloc;
- (id)description;
- (id)destinationEntity;
- (id)relationship;
- (id)generateSQLStringInContext:(id)arg1;
- (id)sourceEntity;
- (void)setJoinType:(unsigned long long)arg1;
- (id)destinationAlias;
- (id)initForRelationship:(id)arg1 sourceAlias:(id)arg2 destinationAlias:(id)arg3 correlationAlias:(id)arg4 direct:(_Bool)arg5 inScope:(id)arg6;
- (id)sourceAlias;
- (void)setSourceAlias:(id)arg1;
- (id)_generateToOneSQLStringInContext:(id)arg1;
- (id)_generateToManySQLStringInContext:(id)arg1;
- (id)_generateManyToManySQLStringInContext:(id)arg1;
- (_Bool)isDirect;
- (void)setDirect:(_Bool)arg1;
- (void)setDestinationAlias:(id)arg1;
- (id)correlationAlias;
- (_Bool)joinType;

@end
