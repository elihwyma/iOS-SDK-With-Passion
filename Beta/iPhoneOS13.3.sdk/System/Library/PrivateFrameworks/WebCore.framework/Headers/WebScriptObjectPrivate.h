/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@interface WebScriptObjectPrivate : NSObject

{
    struct JSObject *imp;
    struct RootObject *rootObject;
    struct RootObject *originRootObject;
    _Bool isCreatedByDOMWrapper;
}

@end
