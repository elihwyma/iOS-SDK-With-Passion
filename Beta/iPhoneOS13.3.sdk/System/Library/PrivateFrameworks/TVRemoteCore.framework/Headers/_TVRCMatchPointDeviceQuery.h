/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class HMHomeManager, NSMutableDictionary, NSString;

@protocol _TVRCMatchPointDeviceQueryDelegate;

@interface _TVRCMatchPointDeviceQuery : NSObject

{
    id <_TVRCMatchPointDeviceQueryDelegate> _delegate;
    HMHomeManager *_homeManager;
    NSMutableDictionary *_wrapperToIdentifierMapping;
}

@property (retain, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) NSMutableDictionary *wrapperToIdentifierMapping;
@property (weak, nonatomic) id <_TVRCMatchPointDeviceQueryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)_matchPointServiceAdded:(id)arg1;
- (void)_matchPointServiceRemoved:(id)arg1;
- (void)_matchPointServiceNameChanged:(id)arg1;
- (void)_notifyAddedService:(id)arg1;
- (void)_notifyRemovedService:(id)arg1;

@end
