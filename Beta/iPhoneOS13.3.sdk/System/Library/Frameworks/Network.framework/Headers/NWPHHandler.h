/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NWPHHandler : NSObject

{
    NSArray *_allowedEntitlementGroup;
    CDUnknownFunctionPointerType _handlerFunction;
}

@property (retain) NSArray *allowedEntitlementGroup;
@property CDUnknownFunctionPointerType handlerFunction;

- (id)initWithHandlerFunction:(CDUnknownFunctionPointerType)arg1 allowedEntitlementGroup:(id)arg2;

@end
