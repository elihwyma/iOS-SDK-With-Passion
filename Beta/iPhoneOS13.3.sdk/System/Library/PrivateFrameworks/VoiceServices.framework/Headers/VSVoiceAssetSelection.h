/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class MAAsset, NSString, VSVoiceAsset;

@interface VSVoiceAssetSelection : NSObject

{
    VSVoiceAsset *_voiceData;
    MAAsset *_asset;
    NSString *_builtInVoicePath;
    NSString *_voicePath;
}

@property (retain) VSVoiceAsset *voiceData;
@property (retain) MAAsset *asset;
@property (retain) NSString *builtInVoicePath;
@property (retain, nonatomic) NSString *voicePath;

- (id)key;
- (unsigned long long)size;
- (_Bool)isInstalled;
- (_Bool)isDownloading;
- (id)descriptiveKey;

@end
