/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class IMMessage, NSDictionary, NSError, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface CKIMFileTransfer : NSObject

{
    int _mediaObjectCount;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    _Bool _isSticker;
    _Bool _fileDataReady;
    _Bool _fileURLFinalized;
    _Bool _restoring;
    _Bool _hideAttachment;
    _Bool _isDirectory;
    NSString *_guid;
    NSURL *_fileURL;
    NSString *_filename;
    NSError *_error;
    NSDictionary *_transcoderUserInfo;
    NSDictionary *_stickerUserInfo;
    unsigned long long _currentBytes;
    unsigned long long _totalBytes;
    long long _transferState;
    IMMessage *_imMessage;
    NSURL *_linkFileURL;
    NSDictionary *_attributionInfo;
}

@property (copy, nonatomic) NSURL *linkFileURL;
@property (nonatomic) long long transferState;
@property (copy, nonatomic) NSDictionary *attributionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) IMMessage *IMMessage;
@property (copy, nonatomic, readonly) NSString *guid;
@property (copy, nonatomic, readonly) NSURL *fileURL;
@property (copy, nonatomic, readonly) NSString *filename;
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

- (void)dealloc;
- (id)notificationCenter;
- (id)fileManager;
- (id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(_Bool)arg4;
- (void)mediaObjectRemoved;
- (void)mediaObjectAdded;
- (void)fetchHighQualityFile:(CDUnknownBlockType)arg1;
- (void)transferUpdated:(id)arg1;
- (id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2;
- (id)initWithStickerFileURL:(id)arg1 transferUserInfo:(id)arg2 attributionInfo:(id)arg3;
- (id)imFileTransferCenter;
- (id)linkFileURLWithFilename:(id)arg1;
- (void)updateTransfer;
- (id)syncController;
- (void)attachmentRestored:(id)arg1;

@end
