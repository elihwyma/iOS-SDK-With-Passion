/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CALayer, NSString;

@interface CKAppliedAnimationContext : NSObject

{
    CALayer *_targetLayer;
    NSString *_key;
}

@property (nonatomic, readonly) CALayer *targetLayer;
@property (copy, nonatomic, readonly) NSString *key;

- (id)initWithTargetLayer:(id)arg1 key:(id)arg2;

@end
