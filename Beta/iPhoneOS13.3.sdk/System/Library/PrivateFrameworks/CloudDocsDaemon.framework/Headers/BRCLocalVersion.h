/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCVersion.h>

@class CKRecord, NSError;

__attribute__((visibility("hidden")))
@interface BRCLocalVersion : BRCVersion

{
    CKRecord *_uploadedAssets;
    NSError *_uploadError;
}

@property (retain, nonatomic) CKRecord *uploadedAssets;
@property (retain, nonatomic) NSError *uploadError;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)descriptionWithContext:(id)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)initForPackage:(_Bool)arg1;
- (void)_clearSignatures:(unsigned long long)arg1 isPackage:(_Bool)arg2;
- (id)initWithLocalVersion:(id)arg1;
- (void)updateLocationAndMetaFromFSAtPath:(id)arg1 updateFilename:(_Bool)arg2 filenameOverride:(id)arg3;
- (id)isPackageObj;
- (id)sizeObj;
- (unsigned long long)diffAgainstLocalVersion:(id)arg1;
- (id)initWithServerVersion:(id)arg1;
- (_Bool)shouldRecreateUploadJobGivenDiffs:(unsigned long long)arg1;
- (_Bool)isMissingUploadsWithDiffs:(unsigned long long)arg1;
- (void)updateFromFSAtPath:(id)arg1 filenameOverride:(id)arg2;

@end
