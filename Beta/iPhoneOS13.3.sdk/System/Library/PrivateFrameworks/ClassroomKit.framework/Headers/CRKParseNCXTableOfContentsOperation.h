/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class CRKChapter, CRKOPFPackageContents, NSMutableArray, NSMutableString, NSString, NSXMLParser;

@interface CRKParseNCXTableOfContentsOperation : CATOperation

{
    NSXMLParser *mNCXParser;
    NSString *mNCXFilePath;
    CRKOPFPackageContents *mPackageContents;
    NSMutableArray *mChapters;
    CRKChapter *mCurrentChapter;
    NSMutableArray *mParentChapters;
    NSMutableString *mCurrentText;
    NSString *mCurrentElementName;
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
- (id)initWithFilePath:(id)arg1 packageContents:(id)arg2;

@end
