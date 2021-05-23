/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSNumber, NSString, PLAgent, PLBBMsg;

@interface PLBasebandMessage : NSObject

{
    NSData *rawData;
    unsigned int ticksInGoodState;
    unsigned int ticksInGPSONState;
    double timeCalibration;
    NSDate *_apTimestamp;
    PLBBMsg *_logger;
    PLAgent *_agent;
    NSNumber *_seqNum;
    NSDate *_date;
    double _timeCal;
    NSString *_pload;
    NSNumber *_msgType;
}

@property (retain, nonatomic, readonly) NSData *rawData;
@property (nonatomic, readonly) unsigned int ticksInGoodState;
@property (nonatomic, readonly) unsigned int ticksInGPSONState;
@property (retain, nonatomic, readonly) NSDate *timestamp;
@property (retain, nonatomic, readonly) NSDate *apTimestamp;
@property (retain, nonatomic, readonly) NSDate *calibratedTimestamp;
@property (nonatomic) double timeCalibration;
@property (retain) PLBBMsg *logger;
@property (retain, nonatomic) PLAgent *agent;
@property (retain, nonatomic) NSNumber *seqNum;
@property (retain, nonatomic) NSDate *date;
@property double timeCal;
@property (retain) NSString *pload;
@property (retain) NSNumber *msgType;

+ (id)messageWithData:(id)arg1;

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (_Bool)isTimestampValid:(char *)arg1;
- (void)logEntry:(id)arg1 withBody:(id)arg2;
- (_Bool)isCalibratedDateGood;
- (void)logMsgAll;

@end
