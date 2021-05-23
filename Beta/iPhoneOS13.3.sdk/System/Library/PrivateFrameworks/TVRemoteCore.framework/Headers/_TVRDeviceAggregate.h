/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class _TVRCHMServiceWrapper, _TVRCMRTelevisionWrapper, _TVRCRPCompanionLinkClientWrapper, _TVRXDevice;

@interface _TVRDeviceAggregate : NSObject

{
    _TVRCMRTelevisionWrapper *_mediaRemote;
    _TVRCRPCompanionLinkClientWrapper *_rapport;
    _TVRCHMServiceWrapper *_homeKit;
    _TVRXDevice *_publicDevice;
}

@property (retain, nonatomic) _TVRCMRTelevisionWrapper *mediaRemote;
@property (retain, nonatomic) _TVRCRPCompanionLinkClientWrapper *rapport;
@property (retain, nonatomic) _TVRCHMServiceWrapper *homeKit;
@property (retain, nonatomic) _TVRXDevice *publicDevice;

- (_Bool)isEmpty;
- (id)bestImpl;

@end
