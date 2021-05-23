/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVFragmentedAssetMinderInternal, NSArray;

@interface AVFragmentedAssetMinder : NSObject

{
    AVFragmentedAssetMinderInternal *_fragmentedAssetMinder;
}

@property (nonatomic) double mindingInterval;
@property (nonatomic, readonly) NSArray *assets;

+ (id)fragmentedAssetMinderWithAsset:(id)arg1 mindingInterval:(double)arg2;

- (id)init;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 mindingInterval:(double)arg2;
- (void)addFragmentedAsset:(id)arg1;
- (void)_setMindingInterval:(double)arg1 removeAllAssets:(_Bool)arg2;
- (_Bool)_throwsWhenAlreadyMindedAssetIsAdded;
- (void)removeFragmentedAsset:(id)arg1;

@end
