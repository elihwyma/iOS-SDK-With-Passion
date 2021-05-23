/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMBlob.h>

@class NSString;

@interface DOMFile : DOMBlob

@property (copy, readonly) NSString *name;

- (long long)lastModified;

@end
