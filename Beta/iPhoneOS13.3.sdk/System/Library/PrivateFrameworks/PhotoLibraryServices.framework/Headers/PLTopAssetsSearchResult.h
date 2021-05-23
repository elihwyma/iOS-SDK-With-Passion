/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, PSITopAssetsResult;

@interface PLTopAssetsSearchResult : NSObject

{
    PSITopAssetsResult *_topAssetsResults;
}

@property (nonatomic, readonly) PSITopAssetsResult *topAssetsResults;
@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic, readonly) NSArray *assetUUIDs;

- (id)initWithTopAssetsResult:(id)arg1;

@end
