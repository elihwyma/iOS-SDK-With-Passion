/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class NSString, NSXMLParser;

@interface CRKParseOPFFilePathOperation : CATOperation

{
    NSXMLParser *mContainerParser;
    NSString *mBookFilePath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (_Bool)isAsynchronous;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (id)initWithBookFilePath:(id)arg1;

@end
