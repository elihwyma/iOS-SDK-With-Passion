/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MBClipsLoader.h>

@class NSMutableDictionary, NSRecursiveLock, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface MBDownloadClipsLoader : MBClipsLoader

{
    NSSet *_assetURLs;
    NSSet *_insertedAssetURLs;
    NSMutableDictionary *_identifierURLsToClipsMap;
    NSRecursiveLock *_updateLock;
}

@property (retain, nonatomic) NSSet *assetURLs;
@property (retain, nonatomic) NSSet *insertedAssetURLs;
@property (retain) NSMutableDictionary *identifierURLsToClipsMap;
@property (retain, nonatomic) NSRecursiveLock *updateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)load;
- (void)downloadStateOfAssetRepresentationDidChange:(id)arg1 previousState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;
- (id)fetchAssetURLs;
- (void)loadClipsFromURLs:(id)arg1;

@end
