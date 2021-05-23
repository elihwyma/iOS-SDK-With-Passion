/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class CPLEngineScope, CPLScopedIdentifier, NSData, NSDate, NSDictionary, NSString;

@interface CPLScopeChange : CPLRecordChange

{
    _Bool _disabled;
    long long _scopeType;
    NSDictionary *_assetCountPerType;
    NSDate *_disabledDate;
    NSDate *_deleteDate;
    NSData *_accountFlagsData;
    unsigned long long _pullTaskItem;
    CPLEngineScope *_scope;
}

@property (nonatomic) long long scopeType;
@property (copy, nonatomic) NSDictionary *assetCountPerType;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (retain, nonatomic) NSDate *disabledDate;
@property (retain, nonatomic) NSDate *deleteDate;
@property (copy, nonatomic) NSData *accountFlagsData;
@property (nonatomic) unsigned long long pullTaskItem;
@property (retain, nonatomic) CPLEngineScope *scope;
@property (copy, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *recordModificationDate;

+ (_Bool)supportsSecureCoding;
+ (id)newScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (id)newDeleteScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (id)descriptionForScopeType:(long long)arg1;
+ (id)mappingForScopeTypeDescription;
+ (Class)scopeChangeClassForType:(long long)arg1;
+ (_Bool)shouldAutoActivateScopeWithType:(long long)arg1;
+ (long long)defaultFlagsForScopeType:(long long)arg1;
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)scopeIdentifier;
- (id)accountFlags;
- (id)_scopedIdentifier;
- (void)_setChangeType:(unsigned long long)arg1;
- (id)initWithScopeIdentifier:(id)arg1 type:(long long)arg2;
- (void)_setupWithLibraryInfo:(id)arg1;
- (void)_setupWithLibraryState:(id)arg1;
- (id)initWithScopeIdentifier:(id)arg1 type:(long long)arg2 libraryInfo:(id)arg3 state:(id)arg4;
- (id)updatedLibraryInfoFromLibraryInfo:(id)arg1 didUpdate:(_Bool *)arg2;

@end
