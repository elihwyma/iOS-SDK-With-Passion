/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PHFetchResult;

@protocol OS_dispatch_queue;

@interface PXPeopleDetailSettingsFaceCropDataSource : NSObject

{
    PHFetchResult *_fetchResult;
    NSMutableDictionary *_images;
    NSObject<OS_dispatch_queue> *_imagesIsolationQueue;
}

@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (retain, nonatomic) NSMutableDictionary *images;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imagesIsolationQueue;

- (id)init;
- (unsigned long long)numberOfAssets;
- (id)imageAtIndexPath:(id)arg1;
- (id)nameAtIndexPath:(id)arg1;

@end
