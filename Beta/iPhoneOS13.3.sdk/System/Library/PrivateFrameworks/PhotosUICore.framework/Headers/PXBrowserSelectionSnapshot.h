/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PXBrowserSelectionSnapshot : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long estimatedAssetCount;
@property (nonatomic, readonly) long long assetCount;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) long long estimatedModelObjectsCount;
@property (nonatomic, readonly) NSArray *modelObjects;

+ (id)selectionWithIndexPaths:(id)arg1 dataSource:(id)arg2;

- (id)displayAssetAtIndex:(long long)arg1;
- (id)assetReferenceAtIndex:(long long)arg1;
- (long long)indexOfAssetReference:(id)arg1;

@end
