/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@interface BLTPairedSyncStateChangedInfo : NSObject

{
    unsigned long long _oldState;
    unsigned long long _newState;
}

@property (nonatomic) unsigned long long oldState;
@property (nonatomic) unsigned long long newState;

@end
