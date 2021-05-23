/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFBufferedDataConsumer, MFFileCompressionQueue, MFLibraryMessage, MFMailMessageLibrary, NSString;

@interface _MFDataCollector : NSObject

{
    MFMailMessageLibrary *_library;
    MFLibraryMessage *_message;
    MFBufferedDataConsumer *_consumer;
    MFFileCompressionQueue *_compressionQueue;
    NSString *_part;
    _Bool _partial;
    _Bool _incomplete;
    _Bool _relaxDataProtection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)data;
- (long long)appendData:(id)arg1;
- (void)done;
- (id)initWithLibrary:(id)arg1 message:(id)arg2 part:(id)arg3 partial:(_Bool)arg4 incomplete:(_Bool)arg5 relaxDataProtection:(_Bool)arg6 compressionQueue:(id)arg7;
- (id)pathForStorage;

@end
