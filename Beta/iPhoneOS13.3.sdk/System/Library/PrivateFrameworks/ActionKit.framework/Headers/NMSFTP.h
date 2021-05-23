/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NMSSHSession;

@interface NMSFTP : NSObject

{
    _Bool _connected;
    NMSSHSession *_session;
    struct _LIBSSH2_SFTP *_sftpSession;
}

@property (retain, nonatomic) NMSSHSession *session;
@property (nonatomic) struct _LIBSSH2_SFTP *sftpSession;
@property (nonatomic, getter=isConnected) _Bool connected;

+ (id)connectWithSession:(id)arg1;

- (_Bool)fileExistsAtPath:(id)arg1;
- (id)contentsAtPath:(id)arg1;
- (void)disconnect;
- (_Bool)directoryExistsAtPath:(id)arg1;
- (_Bool)createDirectoryAtPath:(id)arg1;
- (_Bool)connect;
- (id)initWithSession:(id)arg1;
- (_Bool)removeFileAtPath:(id)arg1;
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2;
- (struct _LIBSSH2_SFTP_HANDLE *)openDirectoryAtPath:(id)arg1;
- (_Bool)removeDirectoryAtPath:(id)arg1;
- (id)contentsOfDirectoryAtPath:(id)arg1;
- (id)infoForFileAtPath:(id)arg1;
- (struct _LIBSSH2_SFTP_HANDLE *)openFileAtPath:(id)arg1 flags:(unsigned long long)arg2 mode:(long long)arg3;
- (_Bool)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2;
- (id)contentsAtPath:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (_Bool)writeContents:(id)arg1 toFileAtPath:(id)arg2;
- (_Bool)writeContents:(id)arg1 toFileAtPath:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (_Bool)writeFileAtPath:(id)arg1 toFileAtPath:(id)arg2;
- (_Bool)writeFileAtPath:(id)arg1 toFileAtPath:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (_Bool)writeStream:(id)arg1 toFileAtPath:(id)arg2;
- (_Bool)writeStream:(id)arg1 toFileAtPath:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (_Bool)appendContents:(id)arg1 toFileAtPath:(id)arg2;
- (_Bool)appendStream:(id)arg1 toFileAtPath:(id)arg2;
- (_Bool)writeStream:(id)arg1 toSFTPHandle:(struct _LIBSSH2_SFTP_HANDLE *)arg2;
- (_Bool)writeStream:(id)arg1 toSFTPHandle:(struct _LIBSSH2_SFTP_HANDLE *)arg2 progress:(CDUnknownBlockType)arg3;
- (_Bool)copyContentsOfPath:(id)arg1 toFileAtPath:(id)arg2 progress:(CDUnknownBlockType)arg3;

@end
