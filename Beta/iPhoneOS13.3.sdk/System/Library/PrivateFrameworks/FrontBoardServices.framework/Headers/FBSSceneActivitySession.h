/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class FBSProcessAssertion, FBSProcessExecutionPolicy, FBSProcessWatchdog, NSString;

@protocol FBSProcess, FBSSceneHandle;

@interface FBSSceneActivitySession : NSObject <Swift>

{
    NSString *_name;
    NSString *_identifier;
    id <FBSSceneHandle> _scene;
    FBSProcessExecutionPolicy *_executionPolicy;
    CDUnknownBlockType _errorHandler;
    _Bool _open;
    _Bool _invalidated;
    id <FBSProcess> _process;
    FBSProcessAssertion *_assertion;
    FBSProcessWatchdog *_watchdog;
}

@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id <FBSSceneHandle> scene;
@property (copy, nonatomic) FBSProcessExecutionPolicy *executionPolicy;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, getter=isOpen) _Bool open;
@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)open;
- (void)close;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)_isValid;
- (id)initWithName:(id)arg1 scene:(id)arg2 executionPolicy:(id)arg3;

@end
