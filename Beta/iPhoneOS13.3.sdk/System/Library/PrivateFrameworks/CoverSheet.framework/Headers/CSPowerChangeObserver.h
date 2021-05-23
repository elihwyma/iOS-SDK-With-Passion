/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@protocol CSPowerStatusProviding, NSObject;

@interface CSPowerChangeObserver : NSObject

{
    id <NSObject> _notificationToken;
    id <CSPowerStatusProviding> _statusProvider;
    _Bool _connectedToPower;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (nonatomic, getter=isConnectedToPower) _Bool connectedToPower;

- (void)dealloc;
- (void)update;
- (void)setIsConnectedToPower:(_Bool)arg1;
- (id)initWithStatusProvider:(id)arg1 notificationName:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;

@end
