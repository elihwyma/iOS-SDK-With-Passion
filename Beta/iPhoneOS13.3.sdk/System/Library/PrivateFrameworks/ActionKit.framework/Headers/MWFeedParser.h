/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class MWFeedInfo, MWFeedItem, NSDateFormatter, NSDictionary, NSMutableString, NSString, NSURL, NSURLRequest, NSURLSessionDataTask, NSXMLParser;

@protocol MWFeedParserDelegate;

@interface MWFeedParser : NSObject

{
    id <MWFeedParserDelegate> delegate;
    NSURLSessionDataTask *urlTask;
    int feedParseType;
    NSXMLParser *feedParser;
    int feedType;
    NSDateFormatter *dateFormatterRFC822;
    NSDateFormatter *dateFormatterRFC3339;
    NSURL *url;
    _Bool aborted;
    _Bool parsing;
    _Bool stopped;
    _Bool failed;
    _Bool parsingComplete;
    _Bool hasEncounteredItems;
    NSString *pathOfElementWithXHTMLType;
    _Bool parseStructureAsContent;
    NSString *currentPath;
    NSMutableString *currentText;
    NSDictionary *currentElementAttributes;
    MWFeedItem *item;
    MWFeedInfo *info;
    NSURLRequest *request;
}

@property (copy, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSURLSessionDataTask *urlTask;
@property (retain, nonatomic) NSXMLParser *feedParser;
@property (retain, nonatomic) NSString *currentPath;
@property (retain, nonatomic) NSMutableString *currentText;
@property (retain, nonatomic) NSDictionary *currentElementAttributes;
@property (retain, nonatomic) MWFeedItem *item;
@property (retain, nonatomic) MWFeedInfo *info;
@property (copy, nonatomic) NSString *pathOfElementWithXHTMLType;
@property (nonatomic) id <MWFeedParserDelegate> delegate;
@property (nonatomic) int feedParseType;
@property (nonatomic, readonly, getter=isStopped) _Bool stopped;
@property (nonatomic, readonly, getter=didFail) _Bool failed;
@property (nonatomic, readonly, getter=isParsing) _Bool parsing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (_Bool)parse;
- (void)parserDidStartDocument:(id)arg1;
- (void)parserDidEndDocument:(id)arg1;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)reset;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (id)initWithFeedURL:(id)arg1;
- (id)initWithFeedRequest:(id)arg1;
- (void)startParsingData:(id)arg1 textEncodingName:(id)arg2;
- (void)abortParsingEarly;
- (void)stopParsing;
- (void)parsingFinished;
- (void)parsingFailedWithErrorCode:(int)arg1 andDescription:(id)arg2;
- (void)dispatchFeedInfoToDelegate;
- (void)dispatchFeedItemToDelegate;
- (_Bool)createEnclosureFromAttributes:(id)arg1 andAddToItem:(id)arg2;
- (_Bool)processAtomLink:(id)arg1 andAddToMWObject:(id)arg2;

@end
