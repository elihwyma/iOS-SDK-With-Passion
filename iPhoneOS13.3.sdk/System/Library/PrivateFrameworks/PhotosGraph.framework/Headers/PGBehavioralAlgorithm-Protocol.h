//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSSet, PGGraph, PHAsset;

@protocol PGBehavioralAlgorithm
- (NSDictionary *)dataToPersist;
- (NSDictionary *)semanticScoreByAssetUUIDForAssets:(NSArray *)arg1;
- (float)semanticScoreForAsset:(PHAsset *)arg1;
- (void)preprocessWithProgressBlock:(void (^)(double, BOOL ))arg1;
- (id)initWithGoldAssets:(NSSet *)arg1 graph:(PGGraph *)arg2 persistedData:(NSDictionary *)arg3;
- (id)initWithGoldAssets:(NSSet *)arg1 graph:(PGGraph *)arg2;
@end

