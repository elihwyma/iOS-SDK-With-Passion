/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface GKComponentSystem : NSObject

{
    NSMutableArray *_components;
    Class _componentClass;
}

@property (nonatomic, readonly) Class componentClass;
@property (retain, nonatomic, readonly) NSArray *components;

- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)addComponent:(id)arg1;
- (void)removeComponent:(id)arg1;
- (void)removeComponentWithEntity:(id)arg1;
- (void)updateWithDeltaTime:(double)arg1;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (id)initWithComponentClass:(Class)arg1;
- (void)addComponentWithEntity:(id)arg1;

@end
