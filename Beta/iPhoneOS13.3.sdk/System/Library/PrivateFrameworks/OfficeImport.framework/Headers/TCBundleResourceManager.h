/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TCBundleResourceManager : NSObject

{
    NSMutableDictionary *mPackageMap;
}

+ (id)instance;
+ (void)disposeInstance;

- (id)init;
- (id)packageWithName:(id)arg1 cacheResult:(_Bool)arg2;
- (id)dataForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(_Bool)arg4;
- (struct _xmlDoc *)xmlDocumentForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(_Bool)arg4;

@end
