/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@protocol _TVRCMROriginDelegate;

@interface _TVRCMROriginWrapper : NSObject

{
    void *_origin;
    _Bool _isObserving;
    id <_TVRCMROriginDelegate> _delegate;
}

@property (weak, nonatomic) id <_TVRCMROriginDelegate> delegate;

- (void)dealloc;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2;
- (id)initWithOrigin:(void *)arg1;
- (void)endObservingUpdates;
- (void)startObservingUpdates;
- (_Bool)isEqualToOriginRef:(void *)arg1;
- (void)getPickedRouteHasVolumeControl:(CDUnknownBlockType)arg1;
- (void)_supportedCommandsChanged:(id)arg1;
- (void)getSupportedCommands:(CDUnknownBlockType)arg1;
- (void)_fetchAndReportSupportedCommands;

@end
