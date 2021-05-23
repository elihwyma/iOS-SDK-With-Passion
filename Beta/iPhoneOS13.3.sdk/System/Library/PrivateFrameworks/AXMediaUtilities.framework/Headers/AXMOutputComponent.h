/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@interface AXMOutputComponent : NSObject

{
    long long _componentState;
}

@property (nonatomic) long long componentState;

+ (_Bool)isSupported;

- (id)init;
- (id)description;
- (_Bool)canHandleRequest:(id)arg1;
- (void)handleRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transitionToState:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
