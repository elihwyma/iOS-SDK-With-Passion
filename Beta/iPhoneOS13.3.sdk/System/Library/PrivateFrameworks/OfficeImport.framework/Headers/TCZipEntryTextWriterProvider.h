/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/TCXmlTextWriterProvider.h>

@class NSString, OISFUZipArchiveOutputStream;

__attribute__((visibility("hidden")))
@interface TCZipEntryTextWriterProvider : TCXmlTextWriterProvider

{
    _Bool _isCompressed;
    NSString *_entryName;
    OISFUZipArchiveOutputStream *_outputStream;
}

@property (copy, nonatomic, readonly) NSString *entryName;
@property (nonatomic, readonly) OISFUZipArchiveOutputStream *outputStream;
@property (nonatomic, readonly) _Bool isCompressed;

- (_Bool)setUp;
- (id)initWithEntryName:(id)arg1 outputStream:(id)arg2 isCompressed:(_Bool)arg3;

@end
