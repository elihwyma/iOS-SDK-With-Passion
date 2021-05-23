/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIViewFittingSizeTargetInfo : NSObject <Swift>

{
    _Bool _dummy;
    float _horizontalPriority;
    float _verticalPriority;
    struct CGSize _targetSize;
}

@property (nonatomic, readonly) struct CGSize targetSize;
@property (nonatomic, readonly) float horizontalPriority;
@property (nonatomic, readonly) float verticalPriority;
@property (nonatomic, getter=isDummy) _Bool dummy;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToTargetInfo:(id)arg1;
- (id)initWithTargetSize:(struct CGSize)arg1 horizontalPriority:(float)arg2 verticalPriority:(float)arg3;

@end
