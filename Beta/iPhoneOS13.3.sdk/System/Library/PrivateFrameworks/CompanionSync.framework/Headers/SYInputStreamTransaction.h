/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSDictionary, NSInputStream, NSProgress, NSString, NSURL;

@interface SYInputStreamTransaction : NSObject

{
    struct NSInputStream *_stream;
    NSDictionary *_metadata;
    NSURL *_fileURL;
    NSProgress *_progress;
}

@property (nonatomic, readonly) NSInputStream *inputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSProgress *progress;

- (id)initWithURL:(id)arg1 metadata:(id)arg2 decompressedSize:(unsigned long long)arg3;

@end
