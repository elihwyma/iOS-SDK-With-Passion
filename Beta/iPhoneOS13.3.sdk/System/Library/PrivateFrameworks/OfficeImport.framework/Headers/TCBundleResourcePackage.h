/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, OISFUZipArchive;

__attribute__((visibility("hidden")))
@interface TCBundleResourcePackage : NSObject

{
    OISFUZipArchive *mZipArchive;
    NSMutableDictionary *mEntryMap;
}

- (id)initWithZipArchive:(id)arg1;
- (id)entryWithName:(id)arg1 cacheResult:(_Bool)arg2;

@end
