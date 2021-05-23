/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSimpleGraphObject.h>

@class NSMutableArray, NSString;

@interface HDSimpleGraphNode : HDSimpleGraphObject

{
    _Bool _areAllRelationshipsLoaded;
    _Bool _areAttributesLoaded;
    NSString *_name;
    NSMutableArray *_relationships;
    NSMutableArray *_attributes;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *relationships;
@property (nonatomic) _Bool areAllRelationshipsLoaded;
@property (retain, nonatomic) NSMutableArray *attributes;
@property (nonatomic) _Bool areAttributesLoaded;

- (id)init;
- (id)description;
- (_Bool)work_loadAllRelationshipsWithMaxDepth:(long long)arg1 error:(id *)arg2;
- (_Bool)_work_loadRelatedNodesRecursiveForRelationships:(id)arg1 maxDepth:(long long)arg2 currentDepth:(long long)arg3 fetchType:(long long)arg4 error:(id *)arg5;
- (_Bool)work_loadRelationships:(id)arg1 maxDepth:(long long)arg2 fetchType:(long long)arg3 error:(id *)arg4;
- (_Bool)work_loadAttributesWithError:(id *)arg1;
- (id)initWithDatabase:(id)arg1 rowID:(long long)arg2 name:(id)arg3 shouldLoadRelationships:(_Bool)arg4;
- (_Bool)work_addAttribute:(id)arg1 ofType:(id)arg2 forKey:(id)arg3 error:(id *)arg4;
- (_Bool)work_addAttribute:(id)arg1 ofType:(id)arg2 forKeyID:(long long)arg3 error:(id *)arg4;
- (id)work_attributesWithError:(id *)arg1;

@end
