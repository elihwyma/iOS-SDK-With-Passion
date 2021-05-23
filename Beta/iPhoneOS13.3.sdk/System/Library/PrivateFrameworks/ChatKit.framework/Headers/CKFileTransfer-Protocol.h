/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/Swift-Protocol.h>

@class IMMessage, NSDictionary, NSError, NSString, NSURL;

@protocol CKFileTransfer <Swift>

@property (retain, nonatomic) IMMessage *IMMessage;
@property (copy, nonatomic, readonly) NSString *guid;
@property (copy, nonatomic, readonly) NSURL *fileURL;
@property (copy, nonatomic, readonly) NSString *filename;
@property (copy, nonatomic, readonly) NSDictionary *transcoderUserInfo;
@property (copy, nonatomic, readonly) NSDictionary *stickerUserInfo;
@property (copy, nonatomic, readonly) NSDictionary *attributionInfo;
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

- (unsigned short)initWithFileURL:transcoderUserInfo:attributionInfo:hideAttachment: /* Error: Ran out of types for this method. */;
- (unsigned short)mediaObjectRemoved;
- (unsigned short)mediaObjectAdded;
- (unsigned short)fetchHighQualityFile: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithTransferGUID:imMessage: /* Error: Ran out of types for this method. */;

@end
