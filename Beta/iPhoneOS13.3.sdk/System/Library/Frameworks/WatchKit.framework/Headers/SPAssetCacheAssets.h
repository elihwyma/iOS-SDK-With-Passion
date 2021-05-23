/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SPAssetCacheAssets : NSObject

{
    NSMutableArray *_assets;
}

@property (retain, nonatomic) NSMutableArray *assets;

+ (id)toProto:(id)arg1;
+ (id)fromProto:(id)arg1;

- (id)init;
- (void)addAsset:(id)arg1;

@end
