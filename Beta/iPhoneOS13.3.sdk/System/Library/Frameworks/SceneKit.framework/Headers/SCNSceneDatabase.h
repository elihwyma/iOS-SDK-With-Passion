/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SCNSceneDatabase : NSObject

{
    NSMutableDictionary *_db;
}

+ (_Bool)supportsSecureCoding;
+ (id)lookUpKeyForObjectNamed:(id)arg1 class:(Class)arg2;
+ (id)sceneDatabase;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addInstance:(id)arg1 withName:(id)arg2 class:(Class)arg3;

@end
