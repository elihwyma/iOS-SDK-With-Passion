/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class IMXMLParserContext, IMXMLParserFrame, NSMutableArray, NSString, NSXMLParser;

@interface IMXMLParser : NSObject

{
    NSXMLParser *_parser;
    IMXMLParserContext *_context;
    IMXMLParserFrame *_topFrame;
    NSMutableArray *_otherFrames;
    struct _TidyDoc *_tidyDoc;
    struct __CFDictionary *_framespace;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundIgnorableWhitespace:(id)arg2;
- (void)_teardownTidy;
- (void)_setupTidy;
- (id)_newDataByTidyingData:(id)arg1;
- (_Bool)parseContext:(id)arg1;

@end
