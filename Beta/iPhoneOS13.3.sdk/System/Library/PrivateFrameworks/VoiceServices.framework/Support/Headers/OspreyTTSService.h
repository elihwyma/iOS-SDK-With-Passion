/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Osprey/OspreyChannel.h>

@class NSString;

@interface OspreyTTSService : OspreyChannel

{
    NSString *_deviceID;
}

@property (retain, nonatomic) NSString *deviceID;

+ (id)sharedInstance;
+ (id)ospreyServiceEndpointURL;

- (id)init;
- (void)roundTripTTS:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)streamTTS:(id)arg1 beginHandler:(CDUnknownBlockType)arg2 chunkHandler:(CDUnknownBlockType)arg3 endHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setConfigurationOptionUseCompression:(_Bool)arg1;
- (void)setConfigurationOptionUseAbsinthe:(_Bool)arg1;

@end
