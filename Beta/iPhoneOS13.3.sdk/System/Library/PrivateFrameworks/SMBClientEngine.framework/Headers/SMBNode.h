/*
 Image: /System/Library/PrivateFrameworks/SMBClientEngine.framework/SMBClientEngine
 */

#import <Foundation/NSObject.h>

@class NSString, SMBPiston, SMB_rq;

@interface SMBNode : NSObject

{
    SMB_rq *rqp[5];
    unsigned int _shareID;
    unsigned int _isOpen;
    int _isCmpd;
    unsigned int _marshallPos;
    unsigned int _parsePos;
    unsigned int _treeID;
    unsigned int _onEncryptedShare;
    SMBPiston *_pd;
    NSString *_name;
    NSString *_streamName;
    unsigned long long _cmpdNextCmdOffset;
    CDStruct_9808ab94 _fid;
}

@property int isCmpd;
@property unsigned int marshallPos;
@property unsigned int parsePos;
@property unsigned long long cmpdNextCmdOffset;
@property unsigned int treeID;
@property unsigned int onEncryptedShare;
@property (retain) SMBPiston *pd;
@property unsigned int shareID;
@property (copy) NSString *name;
@property (copy) NSString *streamName;
@property CDStruct_9808ab94 fid;
@property unsigned int isOpen;

+ (void)nodeForCmpd:(id)arg1 onShareID:(unsigned int)arg2 callBack:(CDUnknownBlockType)arg3;
+ (void)nodeWithParameters:(struct smb_create *)arg1 onPiston:(id)arg2 onShareID:(unsigned int)arg3 withName:(id)arg4 withStreamName:(id)arg5 callBack:(CDUnknownBlockType)arg6;

- (void)dealloc;
- (id)init:(id)arg1;
- (int)commonInit:(id)arg1 onShareID:(unsigned int)arg2;
- (int)commonInit:(id)arg1 onShareID:(unsigned int)arg2 name:(id)arg3 streamName:(id)arg4;
- (int)updateCmpdHdr;
- (int)parseNextHeader:(unsigned short)arg1 retNTStatus:(unsigned int *)arg2 retMdpp:(struct mdchain **)arg3;
- (void)close:(struct smb_close *)arg1 withFlags:(unsigned short)arg2 callBack:(CDUnknownBlockType)arg3;
- (id)initForCmpd:(id)arg1 onShareID:(unsigned int)arg2;
- (id)init:(struct smb_create *)arg1 onPiston:(id)arg2 onShareID:(unsigned int)arg3 withName:(id)arg4 withStreamName:(id)arg5 callBack:(CDUnknownBlockType)arg6;
- (int)cmpdAddCreate:(struct smb_create *)arg1 withName:(id)arg2 withStreamName:(id)arg3;
- (int)cmpdParseCreate:(struct smb_create *)arg1;
- (int)cmpdAddClose:(struct smb_close *)arg1 withFlags:(unsigned short)arg2;
- (int)cmpdParseClose:(struct smb_close *)arg1 withFlags:(unsigned short)arg2;
- (void)flush:(struct smb_flush *)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)read:(struct smb_read_write *)arg1 intoBuffer:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (int)cmpdAddRead:(struct smb_read_write *)arg1 intoBuffer:(id)arg2;
- (int)cmpdParseRead:(struct smb_read_write *)arg1 intoBuffer:(id)arg2;
- (void)write:(struct smb_read_write *)arg1 fromBuffer:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (int)cmpdAddWrite:(struct smb_read_write *)arg1 fromBuffer:(id)arg2;
- (int)cmpdParseWrite:(struct smb_read_write *)arg1;
- (void)lockUnlock:(struct smb_lock *)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)ioctl:(struct smb_ioctl *)arg1 getReparsePoint:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)ioctl:(struct smb_ioctl *)arg1 setReparsePoint:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)ioctl:(struct smb_ioctl *)arg1 pipeTransceive:(id)arg2 withRecvData:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (int)cmpdAddIoctl:(struct smb_ioctl *)arg1 getReparsePoint:(id)arg2;
- (int)cmpdAddIoctl:(struct smb_ioctl *)arg1 setReparsePoint:(id)arg2;
- (int)cmpdAddIoctl:(struct smb_ioctl *)arg1 pipeTransceive:(id)arg2 withRecvData:(id)arg3;
- (int)cmpdParseIoctl:(struct smb_ioctl *)arg1 reparsePoint:(id)arg2 sendInputBuffer:(id)arg3 rcvOutputBuffer:(id)arg4;
- (void)queryDirectory:(struct smb_query_dir *)arg1 onDir:(id)arg2 returnDataIn:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (int)cmpdAddQueryDirectory:(struct smb_query_dir *)arg1 onDir:(id)arg2 returnDataIn:(id)arg3;
- (int)cmpdParseQueryDirectory:(struct smb_query_dir *)arg1 returnDataIn:(id)arg2;
- (void)changeNotify:(struct smb_change_notify *)arg1 withFlags:(unsigned short)arg2 withFilter:(unsigned int)arg3 returnDataIn:(id)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)queryInformation:(struct smb_query_info *)arg1 withStreamName:(id)arg2 forFileAllInfo:(id)arg3 withInputBuffer:(id)arg4 withOutputBuffer:(id)arg5 callBack:(CDUnknownBlockType)arg6;
- (int)cmpdAddQueryInformation:(struct smb_query_info *)arg1 withStreamName:(id)arg2 forFileAllInfo:(id)arg3 withInputBuffer:(id)arg4 withOutputBuffer:(id)arg5;
- (int)cmpdParseQueryInformation:(struct smb_query_info *)arg1 withStreamName:(id)arg2 forFileAllInfo:(id)arg3 withOutputBuffer:(id)arg4;
- (void)setInformation:(struct smb_setinfo *)arg1 withInputBuffer:(id)arg2 withRenameTarget:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (int)cmpdAddSetInformation:(struct smb_setinfo *)arg1 withInputBuffer:(id)arg2 withRenameTarget:(id)arg3;
- (int)cmpdParseSetInformation:(struct smb_setinfo *)arg1;
- (void)sendCmpdRequest:(CDUnknownBlockType)arg1;
- (int)resetCmpdRequest;

@end
