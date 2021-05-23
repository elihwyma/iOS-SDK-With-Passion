/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWFormat, BWFormatRequirements, BWNode, BWNodeConnection, BWNodeInputMediaConfiguration, BWNodeInputMediaProperties, BWVideoFormat, NSArray, NSMutableDictionary, NSString;

@interface BWNodeInput : NSObject

{
    NSString *_name;
    _Bool _mediaTypeIsVideo;
    long long _configurationID;
    unsigned int _mediaType;
    unsigned long long _index;
    _Bool _enabled;
    _Bool _discardsSampleDataTaggedToBeDropped;
    BWNode *_node;
    BWNodeConnection *_connection;
    long long _liveConfigurationID;
    unsigned int _numberOfBuffersReceived;
    unsigned int _numberOfBuffersDropped;
    BWNodeInputMediaConfiguration *_primaryMediaConfiguration;
    BWNodeInputMediaConfiguration *_unspecifiedAttachedMediaConfiguration;
    NSMutableDictionary *_attachedMediaConfigurations;
    BWNodeInputMediaProperties *_primaryMediaProperties;
    NSMutableDictionary *_attachedMediaProperties;
}

@property (retain, nonatomic) BWFormatRequirements *formatRequirements;
@property (retain, nonatomic) BWFormat *format;
@property (nonatomic, readonly) BWVideoFormat *videoFormat;
@property (nonatomic, readonly) BWFormat *liveFormat;
@property (nonatomic) int passthroughMode;
@property (nonatomic) _Bool passesBuffersDownstream;
@property (nonatomic) int retainedBufferCount;
@property (nonatomic) int delayedBufferCount;
@property (nonatomic) int indefinitelyHeldBufferCount;
@property (nonatomic, readonly) _Bool mediaTypeIsVideo;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic) _Bool discardsSampleDataTaggedToBeDropped;
@property (nonatomic, readonly) BWNode *node;
@property (nonatomic) BWNodeConnection *connection;
@property (nonatomic) long long configurationID;
@property (nonatomic, readonly) BWNodeInputMediaConfiguration *primaryMediaConfiguration;
@property (nonatomic, readonly) NSArray *specifiedAttachedMediaKeys;
@property (retain, nonatomic) BWNodeInputMediaConfiguration *unspecifiedAttachedMediaConfiguration;
@property (nonatomic, readonly) BWNodeInputMediaProperties *primaryMediaProperties;
@property (nonatomic, readonly) NSArray *resolvedAttachedMediaKeys;
@property (nonatomic, readonly) long long liveConfigurationID;
@property (nonatomic, readonly) unsigned int numberOfBuffersReceived;
@property (nonatomic, readonly) unsigned int numberOfBuffersDropped;

+ (void)initialize;
+ (struct opaqueCMSampleBuffer *)newSampleDataToBeDroppedMarkerBufferFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithMediaType:(unsigned int)arg1 node:(id)arg2 index:(unsigned long long)arg3;
- (id)initWithMediaType:(unsigned int)arg1 node:(id)arg2;
- (void)setMediaConfiguration:(id)arg1 forAttachedMediaKey:(id)arg2;
- (id)mediaPropertiesForAttachedMediaKey:(id)arg1;
- (void)_setMediaProperties:(id)arg1 forAttachedMediaKey:(id)arg2;
- (id)mediaConfigurationForAttachedMediaKey:(id)arg1;
- (void)_setPrimaryProperties:(id)arg1;
- (void)_clearAllMediaProperties;
- (void)_handleConfigurationLiveMessage:(id)arg1;
- (int)_passthroughModeForUnspecifiedAttachedMedia;
- (void)handleMessage:(id)arg1;
- (int)_passthroughModeForAttachedMediaKey:(id)arg1;

@end
