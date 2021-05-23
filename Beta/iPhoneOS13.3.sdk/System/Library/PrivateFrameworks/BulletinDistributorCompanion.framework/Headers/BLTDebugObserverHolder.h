/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BBObserver, NSString;

@protocol BLTDebugObserverWatchKitAppList;

@interface BLTDebugObserverHolder : NSObject

{
    BBObserver *_observer;
    id <BLTDebugObserverWatchKitAppList> _wkAppList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)startWithWKAppList:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;
- (id)initWithWKAppList:(id)arg1;

@end
