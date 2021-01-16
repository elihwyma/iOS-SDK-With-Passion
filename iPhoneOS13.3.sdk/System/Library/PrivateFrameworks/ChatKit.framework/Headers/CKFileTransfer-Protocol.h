//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IMMessage, NSDictionary, NSError, NSString, NSURL;

@protocol CKFileTransfer <NSObject>
@property(readonly, nonatomic, getter=isRestoring) BOOL restoring;
@property(readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property(readonly, nonatomic, getter=isDownloadable) BOOL downloadable;
@property(readonly, nonatomic, getter=isFileDataReady) BOOL fileDataReady;
@property(readonly, nonatomic, getter=isFileURLFinalized) BOOL fileURLFinalized;
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL hideAttachment;
@property(readonly, nonatomic) BOOL isSticker;
@property(readonly, nonatomic) NSUInteger totalBytes;
@property(readonly, nonatomic) NSUInteger currentBytes;
@property(readonly, copy, nonatomic) NSError *error;
@property(readonly, copy, nonatomic) NSDictionary *attributionInfo;
@property(readonly, copy, nonatomic) NSDictionary *stickerUserInfo;
@property(readonly, copy, nonatomic) NSDictionary *transcoderUserInfo;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, copy, nonatomic) NSURL *fileURL;
@property(readonly, copy, nonatomic) NSString *guid;
@property(retain, nonatomic) IMMessage *IMMessage;
- (void)mediaObjectRemoved;
- (void)mediaObjectAdded;
- (void)fetchHighQualityFile:(void (^)(BOOL, NSURL *))arg1;
- (id)initWithFileURL:(NSURL *)arg1 transcoderUserInfo:(NSDictionary *)arg2 attributionInfo:(NSDictionary *)arg3 hideAttachment:(BOOL)arg4;
- (id)initWithTransferGUID:(NSString *)arg1 imMessage:(IMMessage *)arg2;

@optional
- (id)initWithStickerFileURL:(NSURL *)arg1 transferUserInfo:(NSDictionary *)arg2 attributionInfo:(NSDictionary *)arg3;
@end
