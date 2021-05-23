/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/QLTop.h>

__attribute__((visibility("hidden")))
@interface WMTop : QLTop

- (Class)stateClass;
- (void)initializeClasses;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (Class)mapperClassForIndexing:(_Bool)arg1;

@end
