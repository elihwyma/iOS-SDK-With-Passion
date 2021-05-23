/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFAttachment, NSProgress;

@interface _MFAttachmentActiveRequest : NSObject

{
    _Bool _wantsCompletionBlockOffMainThread;
    MFAttachment *_attachment;
    NSProgress *_downloadProgress;
    CDUnknownBlockType _fetchCompletionBlock;
    long long _lastProgressBytes;
    double _lastProgressTime;
}

@property (nonatomic, readonly) MFAttachment *attachment;
@property (nonatomic, readonly) NSProgress *downloadProgress;
@property (copy, nonatomic, readonly) CDUnknownBlockType fetchCompletionBlock;
@property (nonatomic, readonly) _Bool wantsCompletionBlockOffMainThread;
@property (nonatomic) long long lastProgressBytes;
@property (nonatomic) double lastProgressTime;

- (id)initWithAttachment:(id)arg1;
- (void)completeWithData:(id)arg1 error:(id)arg2;

@end
