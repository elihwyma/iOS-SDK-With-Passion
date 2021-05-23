/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject

{
    IDSServiceMonitor *_monitor;
    NSMutableSet *_listeners;
}

@property (retain, nonatomic) IDSServiceMonitor *monitor;
@property (nonatomic, readonly) NSMutableSet *listeners;

- (id)initWithService:(id)arg1;
- (_Bool)removeListenerID:(id)arg1;
- (_Bool)hasListenerID:(id)arg1;
- (_Bool)addListenerID:(id)arg1;

@end
