/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebCore/WebScriptObject.h>

#import <WebKitLegacy/Swift-Protocol.h>

@class DOMStyleSheet;

@interface DOMObject : WebScriptObject <Swift>

{
    struct DOMObjectInternal *_internal;
}

@property (readonly) DOMStyleSheet *sheet;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
