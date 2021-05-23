/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TSUQuicklookAssetColorMap : NSObject

{
    NSMutableDictionary *mAssetMap;
    NSString *mAppAssetPath;
}

@property (retain, nonatomic) NSMutableDictionary *assetMap;
@property (retain, nonatomic) NSString *appAssetPath;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)quicklookAssetMap;
+ (_Bool)hasAppAssets;
+ (id)colorForResource:(id)arg1;
+ (id)locatorForSageChartTextureSet:(id)arg1 image:(id)arg2;

- (unsigned long long)retainCount;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
