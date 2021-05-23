/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <Foundation/NSObject.h>

@interface ABCCallbackInvoker : NSObject

{
    CDUnknownFunctionPointerType cb;
    void *ab;
    void *context;
}

- (void)invoke;

@end
