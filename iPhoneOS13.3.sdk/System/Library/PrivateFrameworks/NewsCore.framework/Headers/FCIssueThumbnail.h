//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAssetHandle;

@interface FCIssueThumbnail : NSObject
{
    FCAssetHandle *_thumbnailAssetHandle;
    CGSize _thumbnailSize;
}

+ (id)issueThumbnailWithAssetHandle:(id)arg1 thumbnailSize:(CGSize)arg2;
@property(nonatomic) CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) FCAssetHandle *thumbnailAssetHandle; // @synthesize thumbnailAssetHandle=_thumbnailAssetHandle;
// - (void).cxx_destruct;

@end
