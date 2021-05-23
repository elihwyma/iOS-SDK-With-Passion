/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARAnchor;

@interface ARHitTestResult : NSObject

{
    unsigned long long _type;
    double _distance;
    ARAnchor *_anchor;
    CDStruct_14d5dc5e _localTransform;
    CDStruct_14d5dc5e _worldTransform;
}

@property (retain, nonatomic) ARAnchor *anchor;
@property (nonatomic) double distance;
@property (nonatomic) CDStruct_14d5dc5e localTransform;
@property (nonatomic) CDStruct_14d5dc5e worldTransform;
@property (nonatomic, readonly) unsigned long long type;

- (id)description;
- (id)initWithType:(unsigned long long)arg1;
- (id)debugQuickLookObject;
- (id)_description:(_Bool)arg1;

@end
