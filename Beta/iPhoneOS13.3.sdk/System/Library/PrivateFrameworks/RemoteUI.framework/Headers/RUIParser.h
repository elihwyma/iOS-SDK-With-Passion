/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSError, NSMutableArray, NSMutableString, NSString, NSURL, NSXMLParser, RUIActionSignal, RUIAlertView, RUIObjectModel;

@protocol RUIParserDelegate;

@interface RUIParser : NSObject

{
    NSMutableString *_accumulator;
    NSDictionary *_currentElementAttributes;
    RUIAlertView *_currentAlert;
    NSXMLParser *_parser;
    RUIObjectModel *_uiObjectModel;
    NSMutableArray *_pages;
    NSMutableArray *_currentPageStack;
    RUIActionSignal *_actionSignal;
    NSURL *_baseURL;
    int _parserState;
    NSMutableArray *_elementStack;
    _Bool _foundXMLUI;
    _Bool _succeeded;
    NSData *_xmlData;
    NSError *_error;
    id <RUIParserDelegate> _delegate;
}

@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) NSData *xmlData;
@property (nonatomic, readonly) _Bool succeeded;
@property (nonatomic, readonly) NSError *error;
@property (weak, nonatomic) id <RUIParserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)textAlignmentForString:(id)arg1;
+ (id)tableRowClassForElementName:(id)arg1;
+ (id)rowWithAttributeDict:(id)arg1 delegate:(id)arg2 parent:(id)arg3;

- (void)dealloc;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (id)initWithXML:(id)arg1 baseURL:(id)arg2 delegate:(id)arg3;
- (id)uiObjectModel;
- (id)initWithXML:(id)arg1 baseURL:(id)arg2 style:(id)arg3 delegate:(id)arg4;
- (id)actionSignal;
- (id)initWithXML:(id)arg1;
- (void)_validateDocumentContent;
- (id)_createPageWithName:(id)arg1 attributes:(id)arg2;
- (id)_createAndAddPageWithAttributes:(id)arg1;
- (id)_lastPageCreateIfNeeded;
- (void)_logDeprecation:(id)arg1 value:(id)arg2;
- (void)_finalizeSection;
- (void)_finalizePinView;
- (void)_addSectionWithAttributes:(id)arg1;
- (id)_newRowWithAttributeDict:(id)arg1;
- (void)_addNavigationBarWithAttributes:(id)arg1;
- (id)_lastRow;
- (void)_finalizeElement:(id)arg1;

@end
