/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PUAssetsDataSource;

__attribute__((visibility("hidden")))
@interface PUContainedDataSourceInfo : NSObject

{
    PUAssetsDataSource *_assetsDataSource;
    struct _NSRange _externalSections;
}

@property (retain, nonatomic) PUAssetsDataSource *assetsDataSource;
@property (nonatomic) struct _NSRange externalSections;

- (id)description;

@end
