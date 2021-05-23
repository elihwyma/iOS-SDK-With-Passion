/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRAVBufferedInputStream.h>

@class AVOutputContext, NSString;

@interface MRAVInputStream : MRAVBufferedInputStream

{
    AVOutputContext *_outputContext;
}

@property (nonatomic, readonly) AVOutputContext *outputContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)outputContext:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;
- (void)outputContext:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (id)initWithOutputContext:(id)arg1;

@end
