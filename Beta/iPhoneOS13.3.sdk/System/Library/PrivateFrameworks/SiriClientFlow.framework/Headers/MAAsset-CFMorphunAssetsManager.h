/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <MobileAsset/MAAsset.h>

@interface MAAsset (CFMorphunAssetsManager)

- (id)morphunMasteredVersion;
- (id)morphunPath;
- (id)morphunDescription;
- (_Bool)isMorphunInstalled;
- (long long)morphunCompareByVersion:(id)arg1;
- (_Bool)isMorphunDownloading;
- (id)morphunContentVersion;
- (id)morphunLanguage;
- (_Bool)isMorphunOnDisk;
- (id)morphunModelDir;
- (id)morphunModelPath;

@end
