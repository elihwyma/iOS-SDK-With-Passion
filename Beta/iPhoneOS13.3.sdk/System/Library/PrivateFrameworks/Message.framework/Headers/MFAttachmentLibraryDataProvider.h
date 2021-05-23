/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFMessageLibrary, NSString;

@interface MFAttachmentLibraryDataProvider : NSObject

{
    MFMessageLibrary *_messageLibrary;
}

@property (weak) MFMessageLibrary *messageLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithLibrary:(id)arg1;
- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)messageForAttachment:(id)arg1;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;

@end
