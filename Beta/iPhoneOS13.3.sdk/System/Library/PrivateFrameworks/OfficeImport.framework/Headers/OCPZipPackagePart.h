/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCPPackagePart.h>

@class OISFUZipEntry;

__attribute__((visibility("hidden")))
@interface OCPZipPackagePart : OCPPackagePart

{
    OISFUZipEntry *mEntry;
}

@property (nonatomic, readonly) OISFUZipEntry *zipEntry;

- (id)data;
- (struct _xmlDoc *)xmlDocument;
- (struct _xmlTextReader *)xmlReader;
- (void)copyToFile:(id)arg1;
- (id)initWithArchive:(id)arg1 location:(id)arg2 package:(id)arg3;

@end
