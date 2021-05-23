/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface MFFileArchiveEntry : NSObject

{
    _Bool _isDeflated;
    _Bool _isDirectory;
    NSString *_path;
    long long _uncompressedSize;
    NSData *_contents;
    struct _NSRange _compressedRange;
}

@property (retain) NSString *path;
@property long long uncompressedSize;
@property struct _NSRange compressedRange;
@property _Bool isDeflated;
@property _Bool isDirectory;
@property (retain) NSData *contents;

+ (id)archiveEntryWithCentralHeader:(struct CentralHeader *)arg1 archiveData:(id)arg2;
+ (id)archiveEntry;

- (id)description;
- (void)merge:(id)arg1;
- (long long)compressedSize;
- (id)fileName;
- (id)initWithContents:(id)arg1 path:(id)arg2;
- (id)initWithDirectoryPath:(id)arg1;

@end
