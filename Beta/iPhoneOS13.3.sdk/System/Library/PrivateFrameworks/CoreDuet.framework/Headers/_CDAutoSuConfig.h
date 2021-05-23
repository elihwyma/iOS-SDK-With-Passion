/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@interface _CDAutoSuConfig : NSObject

{
    _Bool _alwaysFallBackToDefault;
    _Bool _alwaysReturnUnlockNow;
    _Bool _allowUnlockBeforeNow;
    int _restrictionStartInSlot;
    int _restrictionEndInSlot;
    int _suStartDefaultTime;
    int _suEndDefaultTimeOffsetFromSuStart;
    int _unlockMarginInSlot;
    double _unlockThreshold;
    double _startThreshold;
    double _endThreshold;
}

@property (nonatomic) int restrictionStartInSlot;
@property (nonatomic) int restrictionEndInSlot;
@property (nonatomic) int suStartDefaultTime;
@property (nonatomic) int suEndDefaultTimeOffsetFromSuStart;
@property (nonatomic) _Bool alwaysFallBackToDefault;
@property (nonatomic) _Bool alwaysReturnUnlockNow;
@property (nonatomic) _Bool allowUnlockBeforeNow;
@property (nonatomic) double unlockThreshold;
@property (nonatomic) double startThreshold;
@property (nonatomic) double endThreshold;
@property (nonatomic) int unlockMarginInSlot;

- (int)readConfig;
- (_Bool)validParam;
- (void)setParam;

@end
