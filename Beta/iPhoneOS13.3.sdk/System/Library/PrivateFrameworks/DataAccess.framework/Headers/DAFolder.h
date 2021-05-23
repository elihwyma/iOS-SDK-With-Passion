/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DAFolder : NSObject

{
    _Bool _isDefault;
    _Bool _hasRemoteChanges;
    NSString *_folderName;
    NSString *_folderID;
    NSString *_parentFolderID;
    long long _dataclass;
}

@property (nonatomic) _Bool hasRemoteChanges;
@property (copy, nonatomic) NSString *folderName;
@property (copy, nonatomic) NSString *folderID;
@property (copy, nonatomic) NSString *parentFolderID;
@property (nonatomic) long long dataclass;
@property (nonatomic) _Bool isDefault;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)mailboxID;
- (id)parentMailboxID;

@end
