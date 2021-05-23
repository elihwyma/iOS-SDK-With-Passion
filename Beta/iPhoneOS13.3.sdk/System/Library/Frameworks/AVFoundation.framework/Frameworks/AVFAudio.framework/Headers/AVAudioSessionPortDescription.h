/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVAudioSessionDataSourceDescription, NSArray, NSString;

@interface AVAudioSessionPortDescription : NSObject

{
    void *_impl;
}

@property (readonly) NSString *portType;
@property (readonly) NSString *portName;
@property (readonly) NSString *UID;
@property (readonly) _Bool hasHardwareVoiceCallProcessing;
@property (readonly) NSArray *channels;
@property (readonly) NSArray *dataSources;
@property (readonly) AVAudioSessionDataSourceDescription *selectedDataSource;
@property (readonly) AVAudioSessionDataSourceDescription *preferredDataSource;

+ (id)privateCreateArray:(id)arg1 owningSession:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithSession:(id)arg1;
- (unsigned long long)endpointType;
- (struct PortDescriptionImpl *)privateGetImplementation;
- (_Bool)isEqualToPort:(id)arg1 compareStrict:(_Bool)arg2;
- (_Bool)isLiveListenSupported;
- (_Bool)isHeadphones;
- (_Bool)setPreferredDataSource:(id)arg1 error:(id *)arg2;
- (id)privateGetID;
- (id)initWithRawPortDescription:(id)arg1 owningSession:(id)arg2;
- (void)configureChannelsAndDataSources:(id)arg1;

@end
