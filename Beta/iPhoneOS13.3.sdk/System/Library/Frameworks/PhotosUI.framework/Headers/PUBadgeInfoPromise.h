/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@interface PUBadgeInfoPromise : NSObject <Swift>

{
    CDUnknownBlockType _countProvider;
    struct PXAssetBadgeInfo _badgeInfo;
}

@property (nonatomic, readonly) struct PXAssetBadgeInfo badgeInfo;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBadgeInfo:(struct PXAssetBadgeInfo)arg1;
- (id)initWithBadgeInfo:(struct PXAssetBadgeInfo)arg1 countProvider:(CDUnknownBlockType)arg2;
- (id)badgeInfoPromiseWithAdjustedBadges:(unsigned long long)arg1;

@end
