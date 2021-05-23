/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSManagedObjectModelBundle : NSObject

{
    NSBundle *_bundle;
    NSDictionary *_versionInfoDictionary;
}

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)bundle;
- (id)currentVersion;
- (id)_modelForVersionHashes:(id)arg1;
- (id)optimizedVersionURL;
- (id)currentVersionURL;
- (id)versionInfoDictionary;
- (id)versionHashInfo;
- (id)urlForModelVersionWithName:(id)arg1;
- (id)modelVersions;
- (id)_modelForVersionHashes:(id)arg1 inStyle:(unsigned long long)arg2;

@end
