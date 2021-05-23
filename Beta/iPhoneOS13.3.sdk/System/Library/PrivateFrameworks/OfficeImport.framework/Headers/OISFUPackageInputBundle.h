/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OISFUPackageInputBundle : NSObject

{
    NSString *_rootPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (_Bool)hasEntryWithName:(id)arg1;
- (id)inputStreamForEntry:(id)arg1;
- (id)bufferedInputStreamForEntry:(id)arg1;
- (long long)lengthOfEntry:(id)arg1;
- (unsigned int)crc32ForEntry:(id)arg1;
- (void)copyEntry:(id)arg1 toFile:(id)arg2;
- (id)_existingPathForEntryName:(id)arg1 isGz:(_Bool *)arg2;

@end
