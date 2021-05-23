/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMNode.h>

@class NSString;

@interface DOMEntity : DOMNode

@property (copy, readonly) NSString *publicId;
@property (copy, readonly) NSString *systemId;
@property (copy, readonly) NSString *notationName;

@end
