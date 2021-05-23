/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet, PHAssetCollection;

@interface PXCMMSendBackSuggestion : NSObject

{
    NSSet *_participants;
    NSArray *_recipients;
    PHAssetCollection *_assetCollection;
}

@property (nonatomic, readonly) NSSet *participants;
@property (nonatomic, readonly) NSArray *recipients;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;

+ (id)new;

- (id)init;
- (id)initWithAssetCollection:(id)arg1 participants:(id)arg2;

@end
