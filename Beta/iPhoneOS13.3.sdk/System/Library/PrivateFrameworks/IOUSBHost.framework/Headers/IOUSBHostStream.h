/*
 Image: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
 */

@class IOUSBHostPipe;

@interface IOUSBHostStream

{
    IOUSBHostPipe *_hostPipe;
    unsigned long long _streamID;
}

@property (retain) IOUSBHostPipe *hostPipe;
@property unsigned long long streamID;

- (_Bool)abortWithOption:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithHostPipe:(id)arg1 streamID:(unsigned long long)arg2 ioConnection:(unsigned int)arg3 ioNotificationPortRef:(struct IONotificationPort *)arg4;
- (_Bool)abortWithError:(id *)arg1;
- (_Bool)sendIORequestWithData:(id)arg1 bytesTransferred:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)enqueueIORequestWithData:(id)arg1 error:(id *)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
