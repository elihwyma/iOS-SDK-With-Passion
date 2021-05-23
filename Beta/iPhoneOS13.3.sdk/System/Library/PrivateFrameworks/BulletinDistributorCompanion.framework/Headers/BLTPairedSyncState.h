/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@interface BLTPairedSyncState : NSObject

{
    _Bool _initialSyncComplete;
    unsigned long long _state;
}

@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly, getter=isTrafficRestricted) _Bool trafficRestricted;
@property (nonatomic, readonly, getter=isSyncRestricted) _Bool syncRestricted;
@property (nonatomic, readonly, getter=isInitialSyncComplete) _Bool initialSyncComplete;

+ (id)sharedInstance;

- (void)setInitialSyncComplete:(_Bool)arg1;
- (void)leaveState:(unsigned long long)arg1;
- (_Bool)becameTrafficUnrestricted:(id)arg1;
- (_Bool)becameSyncUnrestricted:(id)arg1;

@end
