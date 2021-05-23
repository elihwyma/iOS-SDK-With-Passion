/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSURL;

@interface MDLArchiveAssetResolver : NSObject

{
    NSURL *_archiveURL;
    NSMutableDictionary *_archiveDictionary;
    NSString *_rootUSDPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithURL:(id)arg1;
- (id)resolveAssetNamed:(id)arg1;
- (_Bool)canResolveAssetNamed:(id)arg1;
- (void)addResolvedAssetNamed:(id)arg1 offset:(unsigned long long)arg2 fileSize:(unsigned long long)arg3;
- (id)resolveInsideArchiveWithAssetNamed:(id)arg1;
- (id)assetNamesInArchive;
- (void)removeAssetNamed:(id)arg1;

@end
