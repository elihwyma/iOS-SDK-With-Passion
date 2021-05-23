/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class DAMailMessage, NSMutableData, NSString;

@protocol MFCollectingDataConsumer, MFMessageDataConsumerFactory;

@interface MFDAMessageContentConsumer : NSObject

{
    int _requestedFormat;
    id <MFCollectingDataConsumer> _dataConsumer;
    id <MFCollectingDataConsumer> _alternatePartConsumer;
    id <MFMessageDataConsumerFactory> _consumerFactory;
    _Bool _triedCreatingAlternatePartConsumer;
    _Bool _didBeginStreaming;
    _Bool _succeeded;
    NSMutableData *_bodyData;
    double _timeOfLastActivity;
    DAMailMessage *_message;
}

@property (nonatomic) int requestedFormat;
@property (retain, nonatomic) id <MFCollectingDataConsumer> dataConsumer;
@property (retain, nonatomic) id <MFCollectingDataConsumer> alternatePartConsumer;
@property (retain, nonatomic) id <MFMessageDataConsumerFactory> consumerFactory;
@property (nonatomic, readonly) DAMailMessage *message;
@property (nonatomic, readonly) NSMutableData *bodyData;
@property (nonatomic, readonly) double timeOfLastActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)data;
- (_Bool)succeeded;
- (_Bool)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (id)dataConsumerForPart:(id)arg1;
- (_Bool)didBeginStreaming;

@end
