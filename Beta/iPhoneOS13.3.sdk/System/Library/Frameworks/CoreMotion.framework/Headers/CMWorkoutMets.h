/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMWorkoutMetsInternal;

@interface CMWorkoutMets : NSObject

{
    CMWorkoutMetsInternal *_internal;
}

@property (nonatomic, readonly) CMWorkoutMetsInternal *_internal;

+ (_Bool)isAvailable;

- (id)init;
- (void)dealloc;
- (void)queryWorkoutMetsWithSessionId:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
