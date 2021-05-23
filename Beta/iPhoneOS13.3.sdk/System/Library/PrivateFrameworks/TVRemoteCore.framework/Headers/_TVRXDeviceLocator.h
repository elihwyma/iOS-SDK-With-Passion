/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, _TVRXDeviceQuery;

@interface _TVRXDeviceLocator : NSObject

{
    _TVRXDeviceQuery *_query;
    NSMutableDictionary *_searches;
}

@property (retain, nonatomic) _TVRXDeviceQuery *query;
@property (retain, nonatomic) NSMutableDictionary *searches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_timerExpired:(id)arg1;
- (void)deviceQueryDidUpdateDevices:(id)arg1;
- (void)findDeviceWithIdentifier:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelSearchForDeviceWithIdentifier:(id)arg1;

@end
