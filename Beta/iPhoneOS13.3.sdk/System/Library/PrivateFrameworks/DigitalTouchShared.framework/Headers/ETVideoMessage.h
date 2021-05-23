/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@class ETSketchMessage, NSArray, NSMutableArray, NSURL, UIImage;

@interface ETVideoMessage

{
    NSMutableArray *_playingMessages;
    double _compressedTimeTotal;
    double _compressedTimeLastEventTime;
    double _messageDuration;
    _Bool _pauseTimeCompression;
    NSURL *_mediaURL;
    UIImage *_stillImage;
    ETSketchMessage *_introMessage;
    unsigned long long _mediaType;
}

@property (retain, nonatomic) NSArray *playingMessages;
@property (retain, nonatomic) NSURL *mediaURL;
@property (retain, nonatomic) UIImage *stillImage;
@property (retain, nonatomic) ETSketchMessage *introMessage;
@property (nonatomic) unsigned long long mediaType;
@property (nonatomic, readonly) _Bool canCompressTime;
@property (nonatomic) _Bool pauseTimeCompression;

+ (unsigned short)messageType;

- (id)init;
- (_Bool)isAnimated;
- (id)archiveData;
- (id)initWithArchiveData:(id)arg1;
- (id)messageTypeAsString;
- (double)messageDuration;
- (unsigned long long)_mediaTypeFromETPVideoType:(int)arg1;
- (int)_etpMediaTypeFromETMediaType:(unsigned long long)arg1;
- (_Bool)shouldLoopDuringPlayback;
- (double)compressTimeSinceStartOfMessage:(double)arg1;

@end
