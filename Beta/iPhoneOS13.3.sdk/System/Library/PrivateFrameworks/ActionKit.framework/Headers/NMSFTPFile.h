/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface NMSFTPFile : NSObject <Swift>

{
    _Bool _isDirectory;
    NSString *_filename;
    NSDate *_modificationDate;
    NSDate *_lastAccess;
    NSNumber *_fileSize;
    unsigned long long _ownerUserID;
    unsigned long long _ownerGroupID;
    NSString *_permissions;
    unsigned long long _flags;
}

@property (retain, nonatomic) NSString *filename;
@property (nonatomic) _Bool isDirectory;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSDate *lastAccess;
@property (retain, nonatomic) NSNumber *fileSize;
@property (nonatomic) unsigned long long ownerUserID;
@property (nonatomic) unsigned long long ownerGroupID;
@property (retain, nonatomic) NSString *permissions;
@property (nonatomic) unsigned long long flags;

+ (id)fileWithName:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)initWithFilename:(id)arg1;
- (void)populateValuesFromSFTPAttributes:(struct _LIBSSH2_SFTP_ATTRIBUTES)arg1;
- (id)convertPermissionToSymbolicNotation:(unsigned long long)arg1;
- (BOOL)filetypeletter:(unsigned long long)arg1;

@end
