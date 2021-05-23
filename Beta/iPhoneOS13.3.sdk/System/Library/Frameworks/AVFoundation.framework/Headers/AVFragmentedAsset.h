/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVURLAsset.h>

@class AVFragmentedAssetInternal, NSArray;

@interface AVFragmentedAsset : AVURLAsset

{
    AVFragmentedAssetInternal *_fragmentedAsset;
}

@property (nonatomic, readonly) NSArray *tracks;
@property (nonatomic, readonly, getter=isAssociatedWithFragmentMinder) _Bool associatedWithFragmentMinder;

+ (id)fragmentedAssetWithURL:(id)arg1 options:(id)arg2;

- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)tracksWithMediaType:(id)arg1;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (_Bool)_mindsFragments;
- (void)_setIsAssociatedWithFragmentMinder:(_Bool)arg1;
- (id)trackWithTrackID:(int)arg1;
- (Class)_classForAssetTracks;

@end
