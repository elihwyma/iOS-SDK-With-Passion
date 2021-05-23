/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, _WKAttachmentInfo;

@interface _WKAttachment : NSObject

{
    struct ObjectStorage<API::Attachment> _attachment;
}

@property (nonatomic, readonly) _WKAttachmentInfo *info;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly, getter=isConnected) _Bool connected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (void)setFileWrapper:(id)arg1 contentType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestInfo:(CDUnknownBlockType)arg1;
- (void)setData:(id)arg1 newContentType:(id)arg2 newFilename:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
