/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface BLTSectionInfoOverride : NSObject

{
    NSNumber *_grouping;
    NSNumber *_level;
    NSNumber *_sound;
    NSNumber *_criticalAlert;
}

@property (retain, nonatomic) NSNumber *grouping;
@property (retain, nonatomic) NSNumber *level;
@property (retain, nonatomic) NSNumber *sound;
@property (retain, nonatomic) NSNumber *criticalAlert;

- (id)initWithOverrides:(id)arg1;

@end
