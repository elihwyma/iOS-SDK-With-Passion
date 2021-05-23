/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@interface VSDownloadService : NSObject

{
    unsigned long long _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (id)inProgressDownloadVoiceKeys;

- (id)initWithType:(unsigned long long)arg1;
- (void)cancelDownloadForAssets:(id)arg1;
- (void)updateVoicesAndVoiceResources;
- (void)updateVoiceIfNeeded:(id)arg1;
- (void)updateVoiceResourcesIfNeeded:(id)arg1;

@end
