/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, PETScalarEventTracker;

@interface SBDesiredIconStateMetric : NSObject

{
    PETScalarEventTracker *_loadEventTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;

@end
