/*
 Image: /System/Library/PrivateFrameworks/SMBClientEngine.framework/SMBClientEngine
 */

#import <Foundation/NSObject.h>

@class NSString, SMBNode, SMBPiston, SMB_rq;

@interface SMBDirEnumerator : NSObject

{
    SMBPiston *pd;
    unsigned int f_shareID;
    int f_flags;
    int f_sfm_conversion;
    unsigned short f_searchCount;
    unsigned char f_infolevel;
    int f_attrmask;
    NSString *f_lookupName;
    NSString *f_createName;
    SMBNode *f_node;
    struct smb_query_dir f_query_inp;
    unsigned int f_query_buffer_len;
    unsigned char f_NetworkNameBuffer[1020];
    unsigned int f_NetworkNameLen;
    struct smbfattr f_attr;
    unsigned int f_eofs;
    SMB_rq *f_create_rqp;
    SMB_rq *f_query_dir_rqp;
    int f_need_close;
    unsigned int f_resume_file_index;
    unsigned int f_output_buf_len;
}

+ (void)enumeratorWithParameters:(id)arg1 onShareID:(unsigned int)arg2 dirName:(id)arg3 lookUpName:(id)arg4 searchFlags:(unsigned int)arg5 outParameters:(struct smb_dir_enum_out *)arg6 callBack:(CDUnknownBlockType)arg7;

- (void)dealloc;
- (int)cleanup;
- (int)commonInit:(id)arg1 onShareID:(unsigned int)arg2 dirName:(id)arg3 lookUpName:(id)arg4 searchFlags:(unsigned int)arg5 outParameters:(struct smb_dir_enum_out *)arg6;
- (int)smb2fs_smb_findnext:(unsigned int *)arg1;
- (int)smb2_smb_query_dir:(unsigned int *)arg1;
- (int)smb2_smb_parse_query_dir_both_dir_info:(struct mdchain *)arg1;
- (void)close:(struct smb_dir_enum_out *)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)init:(id)arg1 onShareID:(unsigned int)arg2 dirName:(id)arg3 lookUpName:(id)arg4 searchFlags:(unsigned int)arg5 outParameters:(struct smb_dir_enum_out *)arg6 callBack:(CDUnknownBlockType)arg7;
- (void)nextEntry:(id)arg1 outParameters:(struct smb_dir_enum_out *)arg2 callBack:(CDUnknownBlockType)arg3;

@end
