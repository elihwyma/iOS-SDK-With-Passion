/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class SCNNodeComponent;

__attribute__((visibility("hidden")))
@interface SCNNodeWeakComponent : NSObject

{
    long long type;
    id component;
    SCNNodeComponent *next;
}

@property (nonatomic) long long type;
@property (weak, nonatomic) id component;
@property (retain, nonatomic) SCNNodeComponent *next;

- (id)initWithType:(long long)arg1 component:(id)arg2;

@end
