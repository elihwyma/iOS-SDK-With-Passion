/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/VEKPipeline.h>

@class NSDate, NSSet, NSString, PHAsset, PHAssetCollection, VEKBlueprint, VEKProduction_MiroMemory_Bridge;

@interface VEKProduction : VEKPipeline

{
    _Bool _isPending;
    PHAssetCollection *_collection;
    double _requestedDuration;
    NSString *_requestedMood;
    NSDate *_memoryViewedDate;
    NSString *_title;
    NSString *_subtitle;
    PHAsset *_keyAsset;
    VEKBlueprint *_blueprint;
    NSSet *_suggestions;
    VEKProduction_MiroMemory_Bridge *_bridge;
    double _maxDuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *fontName;
@property (retain, nonatomic) VEKProduction_MiroMemory_Bridge *bridge;
@property (retain, nonatomic) NSString *requestedMood;
@property (retain, nonatomic) NSDate *memoryViewedDate;
@property (nonatomic) _Bool isPending;
@property (nonatomic) double maxDuration;
@property (nonatomic, readonly) PHAssetCollection *collection;
@property (nonatomic) double requestedDuration;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) VEKBlueprint *blueprint;
@property (retain, nonatomic) NSSet *suggestions;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAssetCollection:(id)arg1;
- (void)exportWithPresets:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)pickedItemCount;
- (void)makePlayerItemWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)makeProjectWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
