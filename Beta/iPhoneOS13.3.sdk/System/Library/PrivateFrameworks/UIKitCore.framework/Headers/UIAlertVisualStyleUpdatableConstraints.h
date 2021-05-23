/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIAlertVisualStyleUpdatableConstraints : NSObject

{
    NSMutableDictionary *_constraintsByKey;
}

- (id)init;
- (_Bool)hasUpdatableConstraints;
- (id)constraintForKey:(id)arg1;
- (void)addConstraint:(id)arg1 forKey:(id)arg2;

@end
