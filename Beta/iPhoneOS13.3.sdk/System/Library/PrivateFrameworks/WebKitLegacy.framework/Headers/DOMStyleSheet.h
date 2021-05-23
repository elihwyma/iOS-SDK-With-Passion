/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMObject.h>

@class DOMMediaList, DOMNode, NSString;

@interface DOMStyleSheet : DOMObject

@property (copy, readonly) NSString *type;
@property _Bool disabled;
@property (readonly) DOMNode *ownerNode;
@property (readonly) DOMStyleSheet *parentStyleSheet;
@property (copy, readonly) NSString *href;
@property (copy, readonly) NSString *title;
@property (readonly) DOMMediaList *media;

- (void)dealloc;

@end
