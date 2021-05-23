/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MSFileCompression : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (_Bool)compressFile:(id)arg1 error:(id *)arg2;
+ (_Bool)_compressFile:(const char *)arg1 error:(id *)arg2;
+ (_Bool)_doCompressFile:(const char *)arg1 errorCode:(long long *)arg2;
+ (id)_compressionLock;
+ (struct CompressionQueueContext_s *)_compressionQueueContext;
+ (_Bool)compressDirectory:(id)arg1 shouldCancel:(CDUnknownBlockType)arg2 error:(id *)arg3;
+ (_Bool)_compressFileInPlace:(const char *)arg1 error:(id *)arg2;

@end
