//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewrite_MergeOriginMovedInfo : NSObject
{
    unordered_map_ddbde191 _mergeOriginsMap;
    unordered_map_ddbde191 _reverseOriginsMap;
}

@property(readonly, nonatomic) const unordered_map_ddbde191 reverseOriginsMap; // @synthesize reverseOriginsMap=_reverseOriginsMap;
@property(readonly, nonatomic) const unordered_map_ddbde191 mergeOriginsMap; // @synthesize mergeOriginsMap=_mergeOriginsMap;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)description;
- (void)saveToMessage:(struct MergeOriginMovedArchive )arg1;
- (id)initFromMessage:(const struct MergeOriginMovedArchive )arg1;
- (id)initWithMergeOriginsMap:(const unordered_map_ddbde191 )arg1 reverseMap:(const unordered_map_ddbde191 )arg2;

@end

