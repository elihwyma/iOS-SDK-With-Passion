/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCAssetHandle, NSArray, NSString;

@interface FCFlintManifest : NSObject

{
    NSString *_identifier;
    NSArray *_fontResourceIDs;
    FCAssetHandle *_mainDocumentAssetHandle;
}

@property (nonatomic, readonly) FCAssetHandle *mainDocumentAssetHandle;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *fontResourceIDs;
@property (nonatomic, readonly) NSArray *anfDocumentAssetHandles;
@property (nonatomic, readonly) _Bool isANFDocumentCached;

- (id)initWithIdentifier:(id)arg1 mainDocumentAssetHandle:(id)arg2 fontResourceIDs:(id)arg3;
- (id)fetchANFDocumentDataProviderWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchANFDocumentDataProviderWithPriority:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
