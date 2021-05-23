/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMObject.h>

@interface DOMNamedNodeMap : DOMObject

@property (readonly) unsigned int length;

- (void)dealloc;
- (id)item:(unsigned int)arg1;
- (id)setNamedItem:(id)arg1;
- (id)getNamedItem:(id)arg1;
- (id)removeNamedItem:(id)arg1;
- (id)getNamedItemNS:(id)arg1 localName:(id)arg2;
- (id)setNamedItemNS:(id)arg1;
- (id)removeNamedItemNS:(id)arg1 localName:(id)arg2;
- (id)getNamedItemNS:(id)arg1:(id)arg2;
- (id)removeNamedItemNS:(id)arg1:(id)arg2;

@end
