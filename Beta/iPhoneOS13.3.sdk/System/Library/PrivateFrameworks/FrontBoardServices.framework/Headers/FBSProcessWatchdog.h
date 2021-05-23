/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class FBSProcessWatchdogPolicy, NSString;

@protocol FBSProcess, FBSProcessInternal;

@interface FBSProcessWatchdog : NSObject <Swift>

{
    NSString *_name;
    id <FBSProcessInternal> _process;
    FBSProcessWatchdogPolicy *_policy;
    _Bool _active;
    _Bool _invalidated;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (weak, nonatomic, readonly) id <FBSProcess> process;
@property (copy, nonatomic, readonly) FBSProcessWatchdogPolicy *policy;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)activate;
- (void)deactivate;
- (void)_beginMonitoringConstraints;
- (void)_stopMonitoringConstraints;
- (void)provision:(id)arg1 wasViolatedWithError:(id)arg2;
- (id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3;

@end
