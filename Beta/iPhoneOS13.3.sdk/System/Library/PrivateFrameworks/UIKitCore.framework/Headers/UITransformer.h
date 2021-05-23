/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITransform.h>

@class NSArray, NSMutableArray, NSString;

@interface UITransformer : UITransform

{
    NSMutableArray *_transforms;
    NSMutableArray *_transformReasonAssociations;
}

@property (copy, nonatomic, readonly) NSArray *transforms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithTransformer:(id)arg1;

@end
