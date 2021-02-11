/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderAssignment : NSObject <TSCH3DShaderStatement> {
    TSCH3DShaderVariableLinkage * mAssignee;
    struct TSCH3DShaderVariableScopeType { 
        unsigned long long mValue; 
    }  mAssigneeScope;
    struct vector<TSCH3DShaderVariableScopeType, std::__1::allocator<TSCH3DShaderVariableScopeType> > { 
        struct TSCH3DShaderVariableScopeType {} *__begin_; 
        struct TSCH3DShaderVariableScopeType {} *__end_; 
        struct __compressed_pair<TSCH3DShaderVariableScopeType *, std::__1::allocator<TSCH3DShaderVariableScopeType> > { 
            struct TSCH3DShaderVariableScopeType {} *__value_; 
        } __end_cap_; 
    }  mDependeeScopes;
    NSArray * mDependees;
    struct TSCH3DShaderType { 
        unsigned long long mValue; 
    }  mLinkageType;
    TSCH3DShaderProgram * mProgram;
    NSString * mStatement;
}

@property (nonatomic, readonly) TSCH3DShaderVariableLinkage *assignee;
@property (nonatomic, readonly) struct TSCH3DShaderVariableScopeType { unsigned long long x1; } assigneeScope;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *dependees;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLinked;
@property (nonatomic) struct TSCH3DShaderType { unsigned long long x1; } linkageType;
@property (nonatomic, readonly) NSString *string;
@property (readonly) Class superclass;

+ (id)assignmentWithAssignee:(id)arg1 statement:(id)arg2 dependees:(id)arg3 program:(id)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)assignee;
- (struct TSCH3DShaderVariableScopeType { unsigned long long x1; })assigneeScope;
- (void)dealloc;
- (struct vector<TSCH3DShaderVariableScopeType, std::__1::allocator<TSCH3DShaderVariableScopeType> > { struct TSCH3DShaderVariableScopeType {} *x1; struct TSCH3DShaderVariableScopeType {} *x2; struct __compressed_pair<TSCH3DShaderVariableScopeType *, std::__1::allocator<TSCH3DShaderVariableScopeType> > { struct TSCH3DShaderVariableScopeType {} *x_3_1_1; } x3; }*)dependeeScopes;
- (id)dependees;
- (id)description;
- (struct TSCH3DShaderType { unsigned long long x1; })dominantDependeeLinkageType;
- (id)expressionStringForType:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (id)forceLinkageForType:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (id)initWithAssigneeLinkage:(id)arg1 statement:(id)arg2 dependees:(id)arg3 program:(id)arg4;
- (bool)isLinked;
- (bool)isMetal;
- (struct TSCH3DShaderType { unsigned long long x1; })linkageType;
- (id)resolve;
- (id)resolveDependeesWithPreviousType:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (void)setAssigneeScopeToType:(struct TSCH3DShaderVariableScopeType { unsigned long long x1; })arg1;
- (void)setGeneratedForType:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (void)setLinkageType:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (id)string;
- (id)updateDependeesWithPreviousType:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (bool)updateLinkageTypeAddVaryingToAdditions:(id)arg1;
- (id)updateVaryingAssignmentForLinkage:(id)arg1;
- (id)variableDeclaration;
- (id)varyingAssignmentForLinkage:(id)arg1;

@end