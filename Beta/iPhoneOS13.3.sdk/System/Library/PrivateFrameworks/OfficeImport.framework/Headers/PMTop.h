/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/QLTop.h>

__attribute__((visibility("hidden")))
@interface PMTop : QLTop

+ (_Bool)supportsProgressiveMapping;

- (_Bool)isCancelled;
- (Class)stateClass;
- (void)initializeClasses;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (Class)mapperClassForIndexing:(_Bool)arg1;
- (void)readFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 format:(unsigned long long)arg4 archiver:(id)arg5 forIndexing:(_Bool)arg6;

@end
