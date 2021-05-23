/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSData.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface NSPageData : NSData

{
    NSData *data;
    NSDate *_originalFileModDate;
    NSString *_originalFilePath;
}

+ (void)initialize;
+ (long long)_umask;

- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;
- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)data;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithDataNoCopy:(id)arg1;
- (void)_setOriginalFileInfoFromFileAttributes:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1 withFileAttributes:(id)arg2;
- (id)_mappedFile;
- (unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(_Bool)arg4 hardLinkPath:(id)arg5;
- (id)initFromSerializerStream:(id)arg1 length:(unsigned long long)arg2;
- (id)deserializer;
- (unsigned long long)writeFd:(long long)arg1;
- (unsigned long long)writeFile:(id)arg1;

@end
