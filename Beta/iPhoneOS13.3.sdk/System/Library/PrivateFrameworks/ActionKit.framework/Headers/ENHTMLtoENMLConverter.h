/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class ENMLWriter, ENXMLSaxParser, NSMutableString, NSString;

@protocol ENHTMLtoENMLConverterDelegate;

@interface ENHTMLtoENMLConverter : NSObject

{
    ENXMLSaxParser *_htmlParser;
    ENMLWriter *_enmlWriter;
    NSMutableString *_enml;
    id <ENHTMLtoENMLConverterDelegate> _delegate;
    _Bool _inHTMLBody;
    int _skipCount;
}

@property (weak, nonatomic) id <ENHTMLtoENMLConverterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)writeData:(id)arg1;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parserDidStartDocument:(id)arg1;
- (void)parserDidEndDocument:(id)arg1;
- (void)finish;
- (void)parser:(id)arg1 didFailWithError:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3;
- (void)parser:(id)arg1 didEndElement:(id)arg2;
- (id)htmlParser;
- (id)enmlWriter;
- (void)xmlWriter:(id)arg1 didGenerateData:(id)arg2;
- (void)xmlWriterDidEndWritingDocument:(id)arg1;
- (id)enmlFromContentsOfHTMLFile:(id)arg1;
- (id)enmlFromHTMLContent:(id)arg1;

@end
