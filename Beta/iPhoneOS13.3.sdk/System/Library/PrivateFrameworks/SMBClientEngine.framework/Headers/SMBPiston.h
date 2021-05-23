/*
 Image: /System/Library/PrivateFrameworks/SMBClientEngine.framework/SMBClientEngine
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, SMBSocket;

@interface SMBPiston : NSObject

{
    struct smb_session session;
    int free_state_mutex;
    int free_credit_mutex;
    int free_credit_cond;
    int free_share_list_mutex;
    int free_session_mutex;
    struct _opaque_pthread_mutex_t state_mutex;
    struct _opaque_pthread_mutex_t share_list_mutex;
    NSMutableDictionary *_shareList;
    SMBSocket *_sock;
    NSString *_userName;
    NSString *_password;
    NSString *_realm;
}

@property (retain) NSMutableDictionary *shareList;
@property (weak) SMBSocket *sock;
@property (retain) NSString *userName;
@property (retain) NSString *password;
@property (retain) NSString *realm;

- (id)init;
- (void)dealloc;
- (void)disconnect;
- (void)setEventHandler:(CDUnknownBlockType)arg1;
- (id)getShare:(unsigned int)arg1;
- (struct smb_session *)getSessionPtr;
- (void)share_list_lock;
- (void)share_list_unlock;
- (void)negotiateTo:(id)arg1 netBIOSname:(id)arg2 withVPNCookie:(id)arg3 outParameters:(struct smb_negotiate *)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)negotiateTo:(id)arg1 netBIOSname:(id)arg2 outParameters:(struct smb_negotiate *)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)negotiateTo:(id)arg1 netBIOSname:(id)arg2 port:(unsigned short)arg3 outParameters:(struct smb_negotiate *)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)negotiateTo:(id)arg1 netBIOSname:(id)arg2 port:(unsigned short)arg3 withTimeOut:(unsigned int)arg4 outParameters:(struct smb_negotiate *)arg5 callBack:(CDUnknownBlockType)arg6;
- (void)login:(struct smb_login_out *)arg1 asUser:(id)arg2 withPassword:(id)arg3 inRealm:(id)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)logoff;
- (void)logoff:(struct smb_login_out *)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)treeConnect:(struct smb_tree_connect_disc *)arg1 toShare:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)treeDisconnect:(struct smb_tree_connect_disc *)arg1 fromShareID:(unsigned int)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)queryShareInformation:(struct smb_query_share *)arg1 forShareID:(unsigned int)arg2 forModelInfo:(id)arg3 forFileSystemName:(id)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)leaseBreakAcknowledge:(struct smb_lease_break_ack *)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)ioctl:(struct smb_ioctl *)arg1 onShareID:(unsigned int)arg2 getDFSRefFor:(id)arg3 withRecvData:(id)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)ioctl:(struct smb_ioctl *)arg1 onShareID:(unsigned int)arg2 pipeWaitOnName:(id)arg3 withTimeOut:(long long)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)validateNegotiate:(struct smb_ioctl *)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)validateNegotiate:(struct smb_ioctl *)arg1 onShareID:(unsigned int)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)serverCopyFile:(struct smb_server_copy_file *)arg1 onShareID:(unsigned int)arg2 from:(id)arg3 to:(id)arg4 withOptions:(unsigned long long)arg5 callBack:(CDUnknownBlockType)arg6;
- (void)resolveID:(struct smb_create *)arg1 forShareID:(unsigned int)arg2 returnPath:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (unsigned int)getCreateOptions:(id)arg1 parentName:(id)arg2 streamName:(id)arg3 vnodeType:(int)arg4 fileAttributes:(unsigned int)arg5 checkForReparsePoint:(unsigned int)arg6;
- (unsigned int)getCreateOptions:(id)arg1 onShareID:(unsigned int)arg2 parentName:(id)arg3 streamName:(id)arg4 vnodeType:(int)arg5 fileAttributes:(unsigned int)arg6 checkForReparsePoint:(unsigned int)arg7;
- (int)getPeerAddress:(struct sockaddr_storage *)arg1 withLength:(unsigned int *)arg2;
- (void)setOption:(const char *)arg1 toValue:(unsigned int)arg2;

@end
