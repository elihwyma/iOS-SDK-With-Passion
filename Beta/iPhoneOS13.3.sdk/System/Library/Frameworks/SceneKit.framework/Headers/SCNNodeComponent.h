/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNNodeComponent : NSObject

{
    long long type;
    id component;
    SCNNodeComponent *next;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) id component;
@property (retain, nonatomic) SCNNodeComponent *next;

- (id)initWithType:(long long)arg1 component:(id)arg2;

@end
