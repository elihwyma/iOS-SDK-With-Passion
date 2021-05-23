/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface BLTReachabilityManager : NSObject

{
    NSObject<OS_dispatch_queue> *_updateQueue;
    _Bool _internetReachable;
}

@property (getter=isInternetReachable) _Bool internetReachable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)interfaceRadioHotnessChanged:(id)arg1;

@end
