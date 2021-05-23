/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSAssetDownloadingOption : NSObject

{
    _Bool _allowVoiceTriggerAssetDownloading;
    _Bool _allowEndpointAssetDownloading;
    _Bool _allowLanguageDetectorAssetDownloading;
}

@property (nonatomic) _Bool allowVoiceTriggerAssetDownloading;
@property (nonatomic) _Bool allowEndpointAssetDownloading;
@property (nonatomic) _Bool allowLanguageDetectorAssetDownloading;

- (id)init;

@end
