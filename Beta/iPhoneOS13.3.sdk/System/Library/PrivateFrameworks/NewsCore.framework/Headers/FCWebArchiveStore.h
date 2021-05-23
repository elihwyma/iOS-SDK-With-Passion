/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCAssetStore;

@interface FCWebArchiveStore : NSObject

{
    FCAssetStore *_assetStore;
}

@property (retain, nonatomic) FCAssetStore *assetStore;

- (id)initWithStoreDirectory:(id)arg1;
- (id)webArchiveURLForKey:(id)arg1;
- (_Bool)saveWebArchiveData:(id)arg1 forKey:(id)arg2;
- (_Bool)deleteWebArchiveForKey:(id)arg1;
- (unsigned long long)totalSizeOfAllWebArchives;
- (id)allWebArchiveKeys;

@end
