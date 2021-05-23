/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTMediaItem.h>

@class NSString, NSURL;

@interface JTLocalAssetMediaItem : JTMediaItem

{
    NSString *_localFileName;
    NSURL *_localFileURL;
}

@property (copy, nonatomic) NSString *localFileName;
@property (retain, nonatomic) NSURL *localFileURL;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (id)info;
- (_Bool)canSaveToCameraRoll;
- (id)initWithInfo:(id)arg1 delegate:(id)arg2;

@end
