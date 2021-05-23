/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSNumber, PLAgent;

@interface PLBBMsgHandler : NSObject

{
    unsigned int _ticksInGoodState;
    unsigned int _ticksInGPSONState;
    NSData *_rawData;
    PLAgent *_agent;
    NSNumber *_seqNum;
    NSDate *_date;
    NSDate *_timestamp;
    NSDate *_apTimestamp;
    NSDate *_calibratedTimestamp;
    double _timeCalibration;
}

@property (retain, nonatomic) NSData *rawData;
@property (retain, nonatomic) PLAgent *agent;
@property (retain, nonatomic) NSNumber *seqNum;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, readonly) unsigned int ticksInGoodState;
@property (nonatomic, readonly) unsigned int ticksInGPSONState;
@property (retain, nonatomic, readonly) NSDate *timestamp;
@property (retain, nonatomic, readonly) NSDate *apTimestamp;
@property (retain, nonatomic, readonly) NSDate *calibratedTimestamp;
@property (nonatomic) double timeCalibration;

+ (id)getMsgHandler;

- (id)init;
- (id)decodeMsgHeader;
- (void)registerWithHandlerAs:(id)arg1 forType:(unsigned long long)arg2;
- (void)handleMsg:(id)arg1 forAgent:(id)arg2;

@end
