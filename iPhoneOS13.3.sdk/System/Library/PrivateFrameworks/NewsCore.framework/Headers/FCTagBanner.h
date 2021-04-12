//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAssetHandle;

@interface FCTagBanner : NSObject
{
    FCAssetHandle *_assetHandle;
    CGSize _size;
    struct FCEdgeInsets _insets;
}

@property(readonly, nonatomic) struct FCEdgeInsets insets; // @synthesize insets=_insets;
@property(readonly, nonatomic) CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) FCAssetHandle *assetHandle; // @synthesize assetHandle=_assetHandle;
// - (void).cxx_destruct;
- (id)initWithAssetHandle:(id)arg1 size:(CGSize)arg2 insets:(struct FCEdgeInsets)arg3;

@end

