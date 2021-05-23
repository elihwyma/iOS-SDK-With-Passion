/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface GKEntity : NSObject

{
    NSMutableDictionary *_components;
}

@property (retain, nonatomic, readonly) NSArray *components;

+ (_Bool)supportsSecureCoding;
+ (id)entity;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addComponent:(id)arg1;
- (id)componentForKey:(id)arg1;
- (void)removeComponent:(id)arg1;
- (void)updateWithDeltaTime:(double)arg1;
- (void)removeComponentForClass:(Class)arg1;
- (id)componentForClass:(Class)arg1;

@end
