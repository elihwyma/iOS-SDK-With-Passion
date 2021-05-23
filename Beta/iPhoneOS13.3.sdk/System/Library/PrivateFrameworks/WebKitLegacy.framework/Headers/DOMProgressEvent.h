/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMEvent.h>

@interface DOMProgressEvent : DOMEvent

@property (readonly) _Bool lengthComputable;
@property (readonly) unsigned long long loaded;
@property (readonly) unsigned long long total;

@end
