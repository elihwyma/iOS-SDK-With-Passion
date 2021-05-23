/*
 Image: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PLNetworkEnergyModel : NSObject

{
    unsigned char _linkType;
    unsigned int _updateCount;
    double _powerlevel1Duration;
    double _powerlevel2Duration;
    double _powerlevel3Duration;
    double _overallBytes;
    double _overallDuration;
    NSString *_taskUUID;
    NSArray *_linkCost;
    NSArray *_linkDuration;
    NSArray *_linkLevel1Parameters;
}

@property double powerlevel1Duration;
@property double powerlevel2Duration;
@property double powerlevel3Duration;
@property unsigned char linkType;
@property double overallBytes;
@property double overallDuration;
@property unsigned int updateCount;
@property (retain) NSString *taskUUID;
@property (retain) NSArray *linkCost;
@property (retain) NSArray *linkDuration;
@property (retain) NSArray *linkLevel1Parameters;

- (id)description;
- (id)initWithLinkType:(unsigned char)arg1;
- (double)getEnergy;
- (double)computeLevel1TimeWithBytes:(double)arg1;
- (void)updateAllLevelTimesWithLevel1Time:(double)arg1 withUpdateDuration:(double)arg2;
- (id)initWithLinkType:(unsigned char)arg1 withTaskUUID:(id)arg2;
- (void)updateWithBytes:(double)arg1 withDuration:(double)arg2;
- (void)reportEnergyToPowerlogWithClientID:(short)arg1;

@end
