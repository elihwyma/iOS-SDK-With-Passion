/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIRuntimeConnection.h>

__attribute__((visibility("hidden")))
@interface UIRuntimeEventConnection : UIRuntimeConnection

{
    unsigned long long eventMask;
}

@property unsigned long long eventMask;
@property (readonly) SEL action;
@property (readonly) id target;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)connect;
- (void)connectForSimulator;

@end
