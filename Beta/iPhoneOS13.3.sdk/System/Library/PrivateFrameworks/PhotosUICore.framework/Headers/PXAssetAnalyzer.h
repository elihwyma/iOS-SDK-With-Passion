/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PXAssetAnalyzer : NSObject

{
    NSMutableDictionary *_analyzerUUIDToRequest;
}

- (id)init;
- (_Bool)canAnalyzeAsset:(id)arg1 forWorkerType:(long long)arg2;
- (void)analyzeAsset:(id)arg1 forWorkerType:(long long)arg2;
- (void)_handleResultForRequest:(id)arg1 success:(_Bool)arg2;
- (id)_keyForAssetUUID:(id)arg1 forWorkerType:(long long)arg2;

@end
