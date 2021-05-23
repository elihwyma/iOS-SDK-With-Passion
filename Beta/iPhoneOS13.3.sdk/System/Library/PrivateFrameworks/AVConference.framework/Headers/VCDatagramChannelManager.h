/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCDatagramChannelManager : NSObject

{
    struct _opaque_pthread_mutex_t _stateLock;
    unsigned int _nextToken;
    CDUnknownBlockType _readHandler;
    NSMutableDictionary *_datagramChannels;
    NSMutableDictionary *_destinations;
}

@property (copy) CDUnknownBlockType readHandler;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)setupDatagramChannel:(id)arg1 eventHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)removeDatagramChannel:(id)arg1;
- (id)addDatagramChannelWithDescriptor:(int)arg1 eventHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)addDatagramChannelWithDestination:(id)arg1 eventHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)datagramChannelWithChannelToken:(unsigned int)arg1;
- (void)executeBlockForIDSDestination:(id)arg1 blockToExecute:(CDUnknownBlockType)arg2;

@end
