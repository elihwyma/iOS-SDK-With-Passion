/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PUAssetsDataSource;

@protocol PUAssetsDataSourceManagerDelegate;

@interface PUAssetsDataSourceManager : NSObject

{
    PUAssetsDataSource *_assetsDataSource;
    id <PUAssetsDataSourceManagerDelegate> _delegate;
}

@property (retain, nonatomic) PUAssetsDataSource *assetsDataSource;
@property (weak, nonatomic) id <PUAssetsDataSourceManagerDelegate> delegate;

@end
