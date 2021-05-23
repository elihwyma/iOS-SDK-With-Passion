/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class IMMessage, NSDictionary, NSError, NSString, NSURL;

@interface CKDBFileTransfer : NSObject

{
    _Bool _isSticker;
    _Bool _hideAttachment;
    _Bool _isDirectory;
    NSString *_guid;
    NSURL *_fileURL;
    NSDictionary *_transcoderUserInfo;
    NSDictionary *_stickerUserInfo;
    NSString *_filename;
    long long _transferState;
    NSDictionary *_attributionInfo;
}

@property (copy, nonatomic) NSString *filename;
@property (nonatomic) long long transferState;
@property (copy, nonatomic) NSDictionary *attributionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) IMMessage *IMMessage;
@property (copy, nonatomic, readonly) NSString *guid;
@property (copy, nonatomic, readonly) NSURL *fileURL;
@property (copy, nonatomic, readonly) NSDictionary *transcoderUserInfo;
@property (copy, nonatomic, readonly) NSDictionary *stickerUserInfo;
@property (copy, nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long currentBytes;
@property (nonatomic, readonly) unsigned long long totalBytes;
@property (nonatomic, readonly) _Bool isSticker;
@property (nonatomic, readonly) _Bool hideAttachment;
@property (nonatomic, readonly) _Bool isDirectory;
@property (nonatomic, readonly, getter=isFileURLFinalized) _Bool fileURLFinalized;
@property (nonatomic, readonly, getter=isFileDataReady) _Bool fileDataReady;
@property (nonatomic, readonly, getter=isDownloadable) _Bool downloadable;
@property (nonatomic, readonly, getter=isDownloading) _Bool downloading;
@property (nonatomic, readonly, getter=isRestoring) _Bool restoring;

- (id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(_Bool)arg4;
- (void)mediaObjectRemoved;
- (void)mediaObjectAdded;
- (void)fetchHighQualityFile:(CDUnknownBlockType)arg1;
- (id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2;

@end
