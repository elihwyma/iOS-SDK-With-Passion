/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMObject.h>

@class DOMDocument;

@interface DOMAbstractView : DOMObject

@property (readonly) DOMDocument *document;

- (void)dealloc;
- (void)_disconnectFrame;

@end
