/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GKNoiseModifier : NSObject

{
    NSMutableArray *_inputModules;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)inputModuleAtIndex:(int)arg1;
- (void)setInputModule:(id)arg1 atIndex:(int)arg2;
- (id)initWithInputModuleCount:(unsigned long long)arg1;

@end
