/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UITransform;

__attribute__((visibility("hidden")))
@interface _UITransformToReasonAssociation : NSObject

{
    UITransform *_transform;
    NSString *_reason;
}

@property (retain, nonatomic) UITransform *transform;
@property (copy, nonatomic) NSString *reason;

+ (id)association:(id)arg1 reason:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTransform:(id)arg1 reason:(id)arg2;

@end
