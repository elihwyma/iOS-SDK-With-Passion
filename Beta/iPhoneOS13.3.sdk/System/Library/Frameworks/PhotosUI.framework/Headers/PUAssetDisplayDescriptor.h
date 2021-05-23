/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSDate, PUAssetReference;

__attribute__((visibility("hidden")))
@interface PUAssetDisplayDescriptor : NSObject

{
    PUAssetReference *_assetReference;
    NSDate *_modifiedAfterDate;
    CDStruct_1b6d18a9 _videoSeekTime;
}

@property (nonatomic, readonly) PUAssetReference *assetReference;
@property (nonatomic, readonly) CDStruct_1b6d18a9 videoSeekTime;
@property (nonatomic, readonly) NSDate *modifiedAfterDate;

+ (id)assetDisplayDescriptorForSimpleNavigationToAssetReference:(id)arg1;

- (id)init;
- (id)initWithAssetReference:(id)arg1 modifiedAfterDate:(id)arg2 videoSeekTime:(CDStruct_1b6d18a9)arg3;

@end
