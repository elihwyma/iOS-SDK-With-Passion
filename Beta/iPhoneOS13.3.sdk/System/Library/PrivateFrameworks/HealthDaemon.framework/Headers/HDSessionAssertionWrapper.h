/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAssertion;

@interface HDSessionAssertionWrapper : NSObject

{
    HDAssertion *_currentAssertion;
    CDUnknownBlockType _createAndTakeBlock;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType createAndTakeBlock;
@property (nonatomic, readonly) _Bool taken;

- (void)_releaseAssertion;
- (id)initWithCreateAndTakeBlock:(CDUnknownBlockType)arg1;
- (void)_takeAssertion;

@end
