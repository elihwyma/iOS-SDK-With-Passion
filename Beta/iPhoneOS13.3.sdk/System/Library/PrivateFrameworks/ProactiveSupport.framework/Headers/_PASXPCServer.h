/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _PASXPCServer : NSObject

{
    NSArray *_XPCListeners;
}

+ (id)description;
+ (void)registerForService:(id)arg1 delegate:(id)arg2;

- (id)init;
- (id)initWithXPCListeners:(id)arg1 logHandle:(id)arg2;
- (void)registerXPCListeners;

@end
