/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMObject.h>

@interface DOMHTMLOptionsCollection : DOMObject

@property int selectedIndex;
@property unsigned int length;

- (void)dealloc;
- (void)remove:(unsigned int)arg1;
- (id)item:(unsigned int)arg1;
- (id)namedItem:(id)arg1;
- (void)add:(id)arg1 index:(unsigned int)arg2;

@end
