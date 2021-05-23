/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IMSingletonOverride : NSObject

{
    id _overriddenSingleton;
}

@property (weak) id overriddenSingleton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didOverrideSingleton:(id)arg1;
- (_Bool)shouldInvokeSelector:(SEL)arg1 onSingleton:(id)arg2;

@end
