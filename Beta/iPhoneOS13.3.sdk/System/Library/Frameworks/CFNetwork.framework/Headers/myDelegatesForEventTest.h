/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSError, NSInputStream, NSOutputStream, NSString;

@interface myDelegatesForEventTest : NSObject <Swift>

{
    NSInputStream *_inStream;
    NSOutputStream *_outStream;
    NSError *_outputStreamError;
    NSError *_inputStreamError;
    _Bool _eventRec;
}

@property (retain) NSError *outputStreamError;
@property (retain) NSError *inputStreamError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)closeStreams;

@end
