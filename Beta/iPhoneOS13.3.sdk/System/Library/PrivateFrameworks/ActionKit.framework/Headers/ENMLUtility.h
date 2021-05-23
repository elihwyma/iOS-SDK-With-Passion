/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class KSHTMLWriter, NSArray, NSMutableString, NSString, NSXMLParser;

@interface ENMLUtility : NSObject

{
    _Bool _shouldIgnoreNextEndElement;
    _Bool _shouldInlineResources;
    NSMutableString *_outputHTML;
    KSHTMLWriter *_htmlWriter;
    NSArray *_resources;
    CDUnknownBlockType _completionBlock;
    NSXMLParser *_xmlParser;
}

@property (retain, nonatomic) NSMutableString *outputHTML;
@property (retain, nonatomic) KSHTMLWriter *htmlWriter;
@property (retain, nonatomic) NSArray *resources;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (retain, nonatomic) NSXMLParser *xmlParser;
@property (nonatomic) _Bool shouldIgnoreNextEndElement;
@property (nonatomic) _Bool shouldInlineResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)mediaTagWithDataHash:(id)arg1 mime:(id)arg2;

- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundComment:(id)arg2;
- (void)generateHTMLFromENML:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateHTMLFromENML:(id)arg1 inlinedResources:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateHTMLFromENML:(id)arg1 referencedResources:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)convertENMLToHTML:(id)arg1 withResources:(id)arg2 inlineResources:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)writeResource:(id)arg1 withAttributes:(id)arg2;
- (void)writeImageTagForResource:(id)arg1 withAttributes:(id)arg2;
- (void)writeTodoWithAttributes:(id)arg1;
- (void)convertENMLToHTML:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)convertENMLToHTML:(id)arg1 withInlinedResources:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)convertENMLToHTML:(id)arg1 withReferencedResources:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
