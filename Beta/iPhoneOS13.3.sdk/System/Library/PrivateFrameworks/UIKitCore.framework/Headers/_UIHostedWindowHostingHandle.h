/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface _UIHostedWindowHostingHandle : NSObject <Swift>

{
    int _pid;
    unsigned int _contextID;
    struct CGAffineTransform _rootLayerTransform;
    struct CGRect _rootLayerFrame;
}

@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) unsigned int contextID;
@property (nonatomic, readonly) struct CGAffineTransform rootLayerTransform;
@property (nonatomic, readonly) struct CGRect rootLayerFrame;

+ (_Bool)supportsSecureCoding;
+ (id)hostedWindowHostingHandleWithContextID:(unsigned int)arg1 rootLayerTransform:(struct CGAffineTransform)arg2 rootLayerFrame:(struct CGRect)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
