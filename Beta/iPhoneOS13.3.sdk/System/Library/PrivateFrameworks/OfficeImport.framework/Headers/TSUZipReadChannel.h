/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, TSUZipArchive, TSUZipEntry;

@protocol TSUReadChannel;

__attribute__((visibility("hidden")))
@interface TSUZipReadChannel : NSObject

{
    TSUZipEntry *_entry;
    TSUZipArchive *_archive;
    _Bool _validateCRC;
    id <TSUReadChannel> _archiveReadChannel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isValid;

- (void)dealloc;
- (void)close;
- (void)setLowWater:(unsigned long long)arg1;
- (_Bool)readFileHeaderFromData:(id)arg1 headerLength:(unsigned long long *)arg2;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithEntry:(id)arg1 archive:(id)arg2 validateCRC:(_Bool)arg3;
- (void)handleFailureWithHandler:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)readWithFileHeaderLength:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)processData:(id)arg1 CRC:(unsigned int *)arg2 isDone:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;

@end
