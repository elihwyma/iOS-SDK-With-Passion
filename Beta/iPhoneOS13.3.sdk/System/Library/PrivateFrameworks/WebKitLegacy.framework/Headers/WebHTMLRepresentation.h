/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

#import <WebKitLegacy/Swift-Protocol.h>

@class NSString, WebHTMLRepresentationPrivate;

@interface WebHTMLRepresentation : NSObject <Swift>

{
    WebHTMLRepresentationPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedNonImageMIMETypes;
+ (id)supportedMediaMIMETypes;
+ (id)supportedMIMETypes;
+ (id)supportedImageMIMETypes;
+ (id)unsupportedTextMIMETypes;

- (id)init;
- (void)dealloc;
- (id)title;
- (void)setDataSource:(id)arg1;
- (id)DOMDocument;
- (id)documentSource;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)_redirectDataToManualLoader:(id)arg1 forPluginView:(id)arg2;
- (_Bool)_isDisplayingWebArchive;
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2 resultDistance:(unsigned long long *)arg3 resultIsInCellAbove:(_Bool *)arg4;
- (_Bool)canProvideDocumentSource;
- (_Bool)canSaveAsWebArchive;
- (id)elementWithName:(id)arg1 inForm:(id)arg2;
- (_Bool)elementDoesAutoComplete:(id)arg1;
- (_Bool)elementIsPassword:(id)arg1;
- (id)formForElement:(id)arg1;
- (id)currentForm;
- (id)controlsInForm:(id)arg1;
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2;
- (id)matchLabels:(id)arg1 againstElement:(id)arg2;

@end
