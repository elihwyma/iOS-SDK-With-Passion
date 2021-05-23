/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSimpleGraphObject.h>

@class HDSimpleGraphNode, NSString;

@interface HDSimpleGraphRelationship : HDSimpleGraphObject

{
    _Bool _isReverseRelationship;
    NSString *_name;
    long long _nameID;
    long long _subjectID;
    long long _objectID;
    HDSimpleGraphNode *_subject;
    HDSimpleGraphNode *_object;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long nameID;
@property (nonatomic) _Bool isReverseRelationship;
@property (nonatomic) long long subjectID;
@property (nonatomic) long long objectID;
@property (weak, nonatomic) HDSimpleGraphNode *subject;
@property (weak, nonatomic) HDSimpleGraphNode *object;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)initWithDatabase:(id)arg1 rowID:(long long)arg2 name:(id)arg3 nameID:(long long)arg4 isReverse:(_Bool)arg5 subjectID:(long long)arg6 subject:(id)arg7 objectID:(long long)arg8 object:(id)arg9;
- (id)work_subjectWithError:(id *)arg1;
- (id)work_databaseObjectWithError:(id *)arg1;

@end
