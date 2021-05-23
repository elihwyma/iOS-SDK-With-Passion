/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class NSURL;

@protocol VCMovieWriterProtocol

@property unsigned int startRTPTimeStamp;
@property unsigned int endRTPTimeStamp;
@property (readonly) unsigned char writerMode;
@property (retain, nonatomic) NSURL *outputURL;

- (unsigned short)setStillImageTime: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithOutputURL:transactionID:videoCodec: /* Error: Ran out of types for this method. */;
- (unsigned short)setupWriterWithMode: /* Error: Ran out of types for this method. */;
- (unsigned short)setEndRTPTimestampWithTimestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldFinishWritingSampleBuffer:RTPtimeStamp:mediaType: /* Error: Ran out of types for this method. */;
- (unsigned short)finishWritingWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldAppendSampleBuffer:RTPtimeStamp:mediaType: /* Error: Ran out of types for this method. */;
- (unsigned short)appendVideoSampleBuffer:cameraStatus:mediaType: /* Error: Ran out of types for this method. */;
- (unsigned short)appendAudioSampleBuffer:mediaType: /* Error: Ran out of types for this method. */;

@end
