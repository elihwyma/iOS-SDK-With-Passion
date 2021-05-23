/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMNode.h>

@class DOMNamedNodeMap, NSString;

@interface DOMDocumentType : DOMNode

@property (copy, readonly) NSString *name;
@property (readonly) DOMNamedNodeMap *entities;
@property (readonly) DOMNamedNodeMap *notations;
@property (copy, readonly) NSString *publicId;
@property (copy, readonly) NSString *systemId;
@property (copy, readonly) NSString *internalSubset;

- (void)remove;

@end
