/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OISFUZipEntry;

__attribute__((visibility("hidden")))
@interface TCBundleResourcePackageEntry : NSObject

{
    OISFUZipEntry *mZipEntry;
    struct _xmlDoc *mXmlDocument;
}

- (void)dealloc;
- (id)data;
- (struct _xmlDoc *)xmlDocument;
- (id)initWithZipEntry:(id)arg1;

@end
