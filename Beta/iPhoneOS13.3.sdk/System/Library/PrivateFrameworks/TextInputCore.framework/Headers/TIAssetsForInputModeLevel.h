/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TIAssetsForInputModeLevel : NSObject

{
    NSMutableDictionary *_assetsByAttributes;
    long long _numberOfAssertions;
    NSString *_inputModeLevel;
}

@property (nonatomic, readonly) NSString *inputModeLevel;

- (_Bool)isEmpty;
- (id)recursiveDescription;
- (void)addAsset:(id)arg1;
- (void)addAssertion;
- (void)removeAssertion;
- (_Bool)purgeAsset:(id)arg1;
- (id)assetContentItemsMatching:(id)arg1;
- (_Bool)hasAssertions;
- (void)gatherStatistics:(id)arg1;
- (id)purgeableAssets;
- (id)initWithInputModeLevel:(id)arg1;
- (id)assetVersionsForAttributes:(id)arg1;
- (void)removeEmptyAssets;

@end
