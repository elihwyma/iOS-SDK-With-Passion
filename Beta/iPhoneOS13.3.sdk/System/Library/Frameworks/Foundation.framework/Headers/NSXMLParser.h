/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSError, NSMutableArray, NSSet, NSURL;

@protocol NSXMLParserDelegate;

@interface NSXMLParser : NSObject

{
    id _reserved0;
    id _delegate;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    struct _xmlSAXHandler *_saxHandler;
    struct _xmlParserCtxt *_parserContext;
    unsigned long long _parserFlags;
    NSError *_error;
    NSMutableArray *_namespaces;
    struct __CFDictionary *_slowStringMap;
    _Bool _delegateAborted;
    _Bool _haveDetectedEncoding;
    NSData *_bomChunk;
    unsigned long long _chunkSize;
    NSSet *_allowedEntityURLs;
    NSURL *_url;
    unsigned long long _externalEntityResolvingPolicy;
}

@property id <NSXMLParserDelegate> delegate;
@property _Bool shouldProcessNamespaces;
@property _Bool shouldReportNamespacePrefixes;
@property unsigned long long externalEntityResolvingPolicy;
@property (copy) NSSet *allowedExternalEntityURLs;
@property (copy, readonly) NSError *parserError;
@property _Bool shouldResolveExternalEntities;

+ (void)setCurrentParser:(id)arg1;
+ (id)currentParser;

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithStream:(id)arg1;
- (void)_initializeSAX2Callbacks;
- (id)initForIncrementalParsing;
- (void)_setExpandedParserError:(id)arg1;
- (void)_setParserError:(long long)arg1;
- (_Bool)parseData:(id)arg1;
- (_Bool)_handleParseResult:(long long)arg1;
- (_Bool)finishIncrementalParse;
- (_Bool)parseFromStream;
- (struct _xmlParserInput *)_xmlExternalEntityWithURL:(const char *)arg1 identifier:(const char *)arg2 context:(struct _xmlParserCtxt *)arg3 originalLoaderFunction:(CDUnknownFunctionPointerType)arg4;
- (void)setShouldContinueAfterFatalError:(_Bool)arg1;
- (_Bool)shouldContinueAfterFatalError;
- (_Bool)parse;
- (void)abortParsing;
- (id)publicID;
- (id)systemID;
- (long long)lineNumber;
- (long long)columnNumber;
- (void)_pushNamespaces:(id)arg1;
- (void)_popNamespaces;

@end
