/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class SCNNode;

@interface SCNManipulableItem : NSObject

{
    double _screenSize;
    SCNNode *node;
    id component;
    unsigned long long elementIndex;
}

@property (retain, nonatomic) SCNNode *node;
@property (retain, nonatomic) id component;
@property (nonatomic) unsigned long long elementIndex;
@property (nonatomic) struct SCNMatrix4 transform;
@property (nonatomic) struct SCNMatrix4 worldTransform;
@property (nonatomic, readonly) struct SCNVector3 elementPosition;

+ (void)removeItemsFromScene:(id)arg1;
+ (void)addItems:(id)arg1 toScene:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (struct SCNVector3)scale;
- (void)setPosition:(struct SCNVector3)arg1;
- (void)setScreenSize:(double)arg1;
- (double)screenSize;
- (id)parentItem;
- (void)validateClone;
- (id)cloneForManipulators;
- (_Bool)isNodeManipulator;

@end
