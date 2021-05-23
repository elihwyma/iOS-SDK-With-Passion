/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSKeyedArchiver.h>

@class NSDictionary;

@interface SCNKeyedArchiver : NSKeyedArchiver

{
    _Bool skipMorphTargets;
    NSDictionary *options;
}

@property (nonatomic) _Bool skipMorphTargets;
@property (copy, nonatomic) NSDictionary *options;

+ (id)archivedDataWithRootObject:(id)arg1 options:(id)arg2;

- (void)dealloc;

@end
