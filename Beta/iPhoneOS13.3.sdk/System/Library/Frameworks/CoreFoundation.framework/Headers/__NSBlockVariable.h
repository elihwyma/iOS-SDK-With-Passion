/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface __NSBlockVariable : NSObject

{
    struct Block_byref *forwarding;
    int flags;
    int size;
    CDUnknownFunctionPointerType byref_keep;
    CDUnknownFunctionPointerType byref_destroy;
    id containedObject;
}

@end
