/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCStatisticsCollector;

__attribute__((visibility("hidden")))
@interface AVCRateControlFeedbackController : NSObject

{
    unsigned int _mode;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _feedbackMessageCount;
    unsigned int _remoteTotalPacketReceivedCount;
    _Bool _isFeedbackReceived;
    _Bool _didRegisterPacketReceivedHandler;
    unsigned int _maxVideoBurstyLossCache;
    unsigned int _maxAudioConsecutiveLossCache;
}

@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned int maxVideoBurstyLossCache;
@property (nonatomic) unsigned int maxAudioConsecutiveLossCache;

- (id)initWithStatisticsCollector:(id)arg1;
- (_Bool)getRateControlFeedbackMessage:(id *)arg1 type:(unsigned int)arg2 metaData:(id *)arg3 error:(id *)arg4;
- (CDStruct_0ee80423)translateRateControlFeedbackMessageFromData:(id)arg1;
- (_Bool)processRateControlFeedbackMessage:(CDStruct_0ee80423)arg1 type:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)getVCStatisticsFeedbackMessage:(CDStruct_b21f1e06 *)arg1 time:(double)arg2;
- (id)translateRateControlDataWithFeedbackMessage:(CDStruct_0ee80423)arg1;
- (_Bool)getFeedbackMessage:(id *)arg1 type:(unsigned int)arg2 metaData:(id *)arg3 error:(id *)arg4;
- (_Bool)processFeedbackMessage:(id)arg1 type:(unsigned int)arg2 metaData:(id)arg3 error:(id *)arg4;
- (_Bool)processRateControlProbingMessage:(CDStruct_4c345eff)arg1 type:(unsigned int)arg2 error:(id *)arg3;
- (CDStruct_0ee80423)translateAFRCFeedbackMessage:(struct tagAFRCFB)arg1;
- (_Bool)translateMediaControlInfo:(void *)arg1 feedbackMessage:(CDStruct_0ee80423 *)arg2;
- (_Bool)detectOutOfOrderFeedbackMessage:(CDStruct_0ee80423)arg1;
- (void)setPacketReceivedStatistics:(CDStruct_cbf42801)arg1;

@end
