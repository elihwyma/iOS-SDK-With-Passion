/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBDaemonRequest : NSObject

{
    CDUnknownBlockType _enabler;
    CDUnknownBlockType _disabler;
}

@property (copy, nonatomic) CDUnknownBlockType enabler;
@property (copy, nonatomic) CDUnknownBlockType disabler;

+ (id)requestWithEnabler:(CDUnknownBlockType)arg1 disabler:(CDUnknownBlockType)arg2;

- (void)dispatchEnablerOnQueue:(id)arg1;
- (void)dispatchDisablerOnQueue:(id)arg1;

@end
