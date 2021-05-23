/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@protocol RemoteProcessingBlockPropertyListener;

__attribute__((visibility("hidden")))
@interface RPBPropertyListener : NSObject

{
    unsigned int _serverID;
    unsigned int _blockID;
    unsigned int _propertyID;
    id <RemoteProcessingBlockPropertyListener> _listener;
}

@property unsigned int serverID;
@property unsigned int blockID;
@property unsigned int propertyID;
@property (weak) id <RemoteProcessingBlockPropertyListener> listener;

@end
