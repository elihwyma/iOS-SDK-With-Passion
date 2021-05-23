/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BBBulletin;

@interface BLTBulletinDistributorBulletinUpdate : NSObject

{
    unsigned long long _updateType;
    BBBulletin *_bulletin;
    unsigned long long _feed;
}

@property (nonatomic) unsigned long long updateType;
@property (retain, nonatomic) BBBulletin *bulletin;
@property (nonatomic) unsigned long long feed;

+ (id)bulletinUpdateWithType:(unsigned long long)arg1 bulletin:(id)arg2 feed:(unsigned long long)arg3;

@end
