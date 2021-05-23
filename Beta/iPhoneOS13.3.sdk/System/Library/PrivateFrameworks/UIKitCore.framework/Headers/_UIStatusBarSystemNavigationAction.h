/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarAction.h>

__attribute__((visibility("hidden")))
@interface _UIStatusBarSystemNavigationAction : _UIStatusBarAction

{
    unsigned long long _destination;
}

@property (nonatomic) unsigned long long destination;

+ (id)backNavigationAction;
+ (id)_navigationActionForDestination:(unsigned long long)arg1;
+ (id)forwardNavigationAction;

@end
