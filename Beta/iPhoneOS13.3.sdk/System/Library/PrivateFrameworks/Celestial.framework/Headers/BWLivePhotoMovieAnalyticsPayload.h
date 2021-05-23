/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSString;

@interface BWLivePhotoMovieAnalyticsPayload : NSObject

{
    int _clientIDType;
    _Bool _success;
    int _errorStatus;
    _Bool _graphRunning;
    _Bool _longPressMovie;
    _Bool _originalRecording;
    double _movieDurationInSeconds;
    double _stillTimeOffsetInSeconds;
    double _stillTimeOffsetToVideoPrerollStartInMilliseconds;
    double _stillTimeOffsetToVideoPrerollStopInMilliseconds;
    double _stillTimeOffsetToAudioPrerollStartInMilliseconds;
    double _stillTimeOffsetToAudioPrerollStopInMilliseconds;
    _Bool _overlappingCapture;
}

@property (nonatomic) int clientIDType;
@property (nonatomic) _Bool success;
@property (nonatomic) int errorStatus;
@property (nonatomic) _Bool graphRunning;
@property (nonatomic) _Bool longPressMovie;
@property (nonatomic) _Bool originalRecording;
@property (nonatomic) double movieDurationInSeconds;
@property (nonatomic) double stillTimeOffsetInSeconds;
@property (nonatomic) double stillTimeOffsetToVideoPrerollStartInMilliseconds;
@property (nonatomic) double stillTimeOffsetToVideoPrerollStopInMilliseconds;
@property (nonatomic) double stillTimeOffsetToAudioPrerollStartInMilliseconds;
@property (nonatomic) double stillTimeOffsetToAudioPrerollStopInMilliseconds;
@property (nonatomic) _Bool overlappingCapture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reset;
- (id)eventName;
- (id)eventDictionary;

@end
