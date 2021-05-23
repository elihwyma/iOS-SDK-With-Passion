/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLBatteryBreakdownNotificationInfo : NSObject

{
    _Bool _isFirstParty;
    int _notificationType;
    int _bgWakingCount;
    int _fgWakingCount;
    int _nonWakingCount;
    int _localCount;
    NSString *_bundleID;
    double _bgWakingNSEDuration;
    double _fgWakingNSEDuration;
    double _nonWakingNSEDuration;
}

@property (retain) NSString *bundleID;
@property _Bool isFirstParty;
@property int notificationType;
@property int bgWakingCount;
@property double bgWakingNSEDuration;
@property int fgWakingCount;
@property double fgWakingNSEDuration;
@property int nonWakingCount;
@property double nonWakingNSEDuration;
@property int localCount;

+ (double)representativeDisplayPower;

- (id)description;
- (id)initWithEntry:(id)arg1;
- (double)activeEnergy;
- (double)baseEnergy;
- (double)displayEnergy;
- (double)calculateActiveEnergyForNSEDuration:(double)arg1 andCount:(int)arg2 withNominalEnergy:(double)arg3;
- (void)combineWith:(id)arg1;
- (double)notificationEnergy;

@end
