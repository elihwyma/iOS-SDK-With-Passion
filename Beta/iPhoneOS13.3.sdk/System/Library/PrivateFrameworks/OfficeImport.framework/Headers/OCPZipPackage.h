/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCPPackage.h>

@class NSMutableDictionary, OISFUZipArchive;

__attribute__((visibility("hidden")))
@interface OCPZipPackage : OCPPackage

{
    OISFUZipArchive *mArchive;
    NSMutableDictionary *mParts;
}

- (id)initWithData:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithArchive:(id)arg1;
- (id)partForLocation:(id)arg1;
- (void)resetPartForLocation:(id)arg1;

@end
