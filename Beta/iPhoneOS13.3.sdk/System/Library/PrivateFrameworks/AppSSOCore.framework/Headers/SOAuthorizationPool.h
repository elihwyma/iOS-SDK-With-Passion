/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SOAuthorizationPool : NSObject

{
    NSMutableArray *_pool;
}

- (id)init;
- (void)addAuthorization:(id)arg1 delegate:(id)arg2;
- (void)removeAuthorization:(id)arg1;

@end
