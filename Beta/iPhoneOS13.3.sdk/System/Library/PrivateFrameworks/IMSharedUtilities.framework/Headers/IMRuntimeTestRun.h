/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class IMRuntimeTest;

@interface IMRuntimeTestRun : NSObject

{
    _Bool _succeeded;
    IMRuntimeTest *_test;
}

@property (getter=hasSucceeded) _Bool succeeded;
@property (readonly) IMRuntimeTest *test;

- (void)stop;
- (void)start;
- (id)initWithTest:(id)arg1;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;

@end
