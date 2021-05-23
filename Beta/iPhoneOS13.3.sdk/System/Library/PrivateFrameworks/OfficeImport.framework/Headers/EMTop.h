/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/QLTop.h>

@class EMWorkbookMapper;

__attribute__((visibility("hidden")))
@interface EMTop : QLTop

@property (readonly) EMWorkbookMapper *mapper;

+ (_Bool)supportsProgressiveMapping;

- (Class)stateClass;
- (void)initializeClasses;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (Class)mapperClassForIndexing:(_Bool)arg1;
- (void)readFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 format:(unsigned long long)arg4 archiver:(id)arg5 forIndexing:(_Bool)arg6;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;

@end
