/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class CRKOPFPackageContents, NSMutableString, NSString, NSXMLParser;

@interface CRKParseOPFPackageContentsOperation : CATOperation

{
    NSXMLParser *mOPFParser;
    NSString *mOPFFilePath;
    CRKOPFPackageContents *mPackageContents;
    NSMutableString *mCurrentText;
    NSString *mCoverItemID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (_Bool)isAsynchronous;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (id)initWithOPFFilePath:(id)arg1 identifierType:(id)arg2 identifier:(id)arg3;

@end
