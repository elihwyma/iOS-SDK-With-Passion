/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDMMCSItem, CKDMMCSItemGroupContext, NSFileHandle, NSString;

__attribute__((visibility("hidden")))
@interface CKDMMCSItemReader : NSObject

{
    CKDMMCSItemGroupContext *_MMCSRequest;
    CKDMMCSItem *_MMCSItem;
    NSFileHandle *_fileHandle;
}

@property (retain, nonatomic) CKDMMCSItemGroupContext *MMCSRequest;
@property (retain, nonatomic) CKDMMCSItem *MMCSItem;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)openWithError:(id *)arg1;
- (_Bool)closeWithError:(id *)arg1;
- (id)getFileMetadataWithError:(id *)arg1;
- (_Bool)readBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long *)arg4 error:(id *)arg5;
- (id)initWithMMCSItem:(id)arg1 MMCSRequest:(id)arg2;

@end
