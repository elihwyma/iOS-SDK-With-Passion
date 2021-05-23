/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface BRFileObjectID : NSObject

@property (nonatomic, readonly) NSString *asString;
@property (nonatomic, readonly) _Bool isFolderOrAliasID;
@property (nonatomic, readonly) _Bool isDocumentID;
@property (nonatomic, readonly) NSNumber *folderID;
@property (nonatomic, readonly) NSNumber *documentID;
@property (nonatomic, readonly) unsigned long long rawID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)fileObjectIDForURL:(id)arg1 allocateDocID:(_Bool)arg2 error:(id *)arg3;
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
+ (id)fileObjectIDWithString:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToFileObjectID:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;

@end
