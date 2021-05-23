/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSData.h>

@class EFSQLBinding, NSString;

@interface NSData (EmailFoundationAdditions)

@property (copy, readonly) NSData *ef_md5Digest;
@property (copy, readonly) NSData *ef_sha256Digest;
@property (copy, readonly) NSString *ef_hexString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) EFSQLBinding *ef_SQLBinding;

- (id)ef_sha256DigestWithSalts:(id)arg1;

@end
