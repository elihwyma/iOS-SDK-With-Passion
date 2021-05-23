/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSDictionary, NSOutputStream, NSProgress, NSString, NSURL;

@interface SYOutputStreamTransaction : NSObject

{
    NSDictionary *_metadata;
    NSURL *_fileURL;
    struct NSOutputStream *_stream;
    NSProgress *_progress;
}

@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSProgress *progress;

- (void)dealloc;
- (id)initWithMetadata:(id)arg1;
- (_Bool)prepare:(id *)arg1;
- (id)finalizeOutput:(id *)arg1;

@end
