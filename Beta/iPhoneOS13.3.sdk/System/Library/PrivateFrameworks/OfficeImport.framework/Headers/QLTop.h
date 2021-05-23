/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CMArchiveManager, CMMapper, CMState, NSString, OCDDocument;

__attribute__((visibility("hidden")))
@interface QLTop : NSObject

{
    CMMapper *_mapper;
    CMState *_state;
    CMArchiveManager *_archiver;
    OCDDocument *_document;
    NSString *_fileName;
    unsigned long long _format;
    _Bool _forIndexing;
}

@property (readonly) CMMapper *mapper;
@property (readonly) CMState *state;
@property _Bool forIndexing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsProgressiveMapping;
+ (void)fillHTMLArchiveForOfficeFile:(id)arg1 dataFormat:(unsigned long long)arg2 archiver:(id)arg3;
+ (void)fillHTMLArchiveForOfficeData:(id)arg1 fileName:(id)arg2 dataFormat:(unsigned long long)arg3 archiver:(id)arg4;
+ (void)fillHTMLArchiveForOfficeFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 dataFormat:(unsigned long long)arg4 archiver:(id)arg5;
+ (id)metadataForBinaryOfficeFileAtURL:(id)arg1 error:(id *)arg2;

- (Class)stateClass;
- (void)initializeClasses;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (Class)mapperClassForIndexing:(_Bool)arg1;
- (void)readFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 format:(unsigned long long)arg4 archiver:(id)arg5 forIndexing:(_Bool)arg6;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;
- (void)readerDidReadElement:(id)arg1 atIndex:(unsigned long long)arg2 inDocument:(id)arg3 isLastElement:(_Bool)arg4;
- (void)readerDidEndDocument:(id)arg1;
- (id)documentWithFile:(id)arg1 orData:(id)arg2 isXML:(_Bool)arg3 archiver:(id)arg4;
- (void)setupMappingStateWithDocument:(id)arg1;

@end
