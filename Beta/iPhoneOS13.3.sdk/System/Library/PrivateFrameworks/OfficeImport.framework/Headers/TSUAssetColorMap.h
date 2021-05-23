/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSUAssetColorMap : NSObject

{
    NSMutableDictionary *mAssetPathToColorMap;
}

@property (copy, nonatomic, readonly) NSDictionary *assetPathToColorMap;

+ (id)assetColorMap;

- (id)init;
- (id)TSUColorFromColorArray:(id)arg1;
- (void)addEntriesFromPlistBasename:(id)arg1 transformKeyBlock:(CDUnknownBlockType)arg2;
- (void)addSharedEntries;
- (void)addChartEntries;

@end
