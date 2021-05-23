/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, OISFUZipArchive;

__attribute__((visibility("hidden")))
@interface OISFUZipInputBundle : NSObject

{
    OISFUZipArchive *_zipArchive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)hasEntryWithName:(id)arg1;
- (id)inputStreamForEntry:(id)arg1;
- (id)bufferedInputStreamForEntry:(id)arg1;
- (long long)lengthOfEntry:(id)arg1;
- (unsigned int)crc32ForEntry:(id)arg1;
- (void)copyEntry:(id)arg1 toFile:(id)arg2;
- (id)initWithZipArchive:(id)arg1;

@end
