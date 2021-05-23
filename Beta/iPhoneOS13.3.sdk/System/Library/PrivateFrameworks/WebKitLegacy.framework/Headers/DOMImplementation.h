/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMObject.h>

@interface DOMImplementation : DOMObject

- (void)dealloc;
- (_Bool)hasFeature:(id)arg1 version:(id)arg2;
- (id)createDocumentType:(id)arg1 publicId:(id)arg2 systemId:(id)arg3;
- (id)createDocument:(id)arg1 qualifiedName:(id)arg2 doctype:(id)arg3;
- (id)createCSSStyleSheet:(id)arg1 media:(id)arg2;
- (id)createHTMLDocument:(id)arg1;
- (_Bool)hasFeature:(id)arg1:(id)arg2;
- (id)createDocumentType:(id)arg1:(id)arg2:(id)arg3;
- (id)createDocument:(id)arg1:(id)arg2:(id)arg3;
- (id)createCSSStyleSheet:(id)arg1:(id)arg2;

@end
