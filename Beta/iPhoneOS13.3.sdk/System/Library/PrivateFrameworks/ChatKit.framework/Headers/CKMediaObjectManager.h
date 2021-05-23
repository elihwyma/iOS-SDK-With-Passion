/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKMediaObjectManager : NSObject

{
    NSMutableDictionary *_transfers;
    NSArray *_classes;
    NSDictionary *_UTITypes;
    NSDictionary *_dynTypes;
}

@property (copy, nonatomic) NSArray *classes;
@property (copy, nonatomic) NSDictionary *UTITypes;
@property (copy, nonatomic) NSDictionary *dynTypes;
@property (retain, nonatomic) NSMutableDictionary *transfers;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)fileManager;
- (id)mediaObjectWithSticker:(id)arg1 stickerUserInfo:(id)arg2;
- (Class)classForFilename:(id)arg1;
- (id)UTITypeForFilename:(id)arg1;
- (id)allUTITypes;
- (Class)classForUTIType:(id)arg1;
- (id)mediaObjectWithData:(id)arg1 UTIType:(id)arg2 filename:(id)arg3 transcoderUserInfo:(id)arg4;
- (id)mediaObjectWithFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3;
- (id)mediaObjectWithTransferGUID:(id)arg1 imMessage:(id)arg2 parentChatIsSpam:(_Bool)arg3;
- (id)mediaObjectWithTransferGUID:(id)arg1 imMessage:(id)arg2;
- (void)transferRemoved:(id)arg1;
- (id)UTITypeForExtension:(id)arg1;
- (id)transferWithTransferGUID:(id)arg1 imMessage:(id)arg2;
- (id)transferWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(_Bool)arg4;
- (id)mediaObjectWithFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 attributionInfo:(id)arg4 hideAttachment:(_Bool)arg5;
- (id)transferWithStickerFileURL:(id)arg1 transferUserInfo:(id)arg2 attributionInfo:(id)arg3;
- (Class)transferClass;

@end
