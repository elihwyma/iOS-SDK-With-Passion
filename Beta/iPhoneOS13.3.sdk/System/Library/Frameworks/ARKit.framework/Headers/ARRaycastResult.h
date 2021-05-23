/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARAnchor, NSUUID;

@interface ARRaycastResult : NSObject

{
    long long _target;
    long long _targetAlignment;
    ARAnchor *_anchor;
    NSUUID *_anchorIdentifier;
    CDStruct_14d5dc5e _worldTransform;
    CDStruct_14d5dc5e _localTransform;
}

@property (nonatomic) long long target;
@property (retain, nonatomic) ARAnchor *anchor;
@property (nonatomic) CDStruct_14d5dc5e localTransform;
@property (retain, nonatomic) NSUUID *anchorIdentifier;
@property (nonatomic, readonly) CDStruct_14d5dc5e worldTransform;
@property (nonatomic, readonly) long long targetAlignment;

- (id)description;
- (id)_description:(_Bool)arg1;
- (id)initWithWorldTransform:(CDStruct_14d5dc5e)arg1 target:(long long)arg2 targetAlignment:(long long)arg3;

@end
