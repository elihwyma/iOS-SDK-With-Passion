/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetTrackGroupInternal, NSArray;

@interface AVAssetTrackGroup : NSObject

{
    AVAssetTrackGroupInternal *_assetTrackGroup;
}

@property (nonatomic, readonly) NSArray *trackIDs;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAsset:(id)arg1 trackIDs:(id)arg2;
- (id)_assetComparisonToken;

@end
