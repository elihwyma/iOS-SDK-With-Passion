/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString, SBSStatusBarStyleOverridesAssertionData;

@interface SBSStatusBarStyleOverridesAssertion : NSObject

{
    SBSStatusBarStyleOverridesAssertionData *_assertionData;
    CDUnknownBlockType _invalidationHandler;
}

@property (retain, nonatomic) SBSStatusBarStyleOverridesAssertionData *assertionData;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic, readonly) int statusBarStyleOverrides;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly, getter=isExclusive) _Bool exclusive;
@property (nonatomic, readonly) _Bool showsWhenForeground;
@property (copy, nonatomic) NSString *statusString;
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;
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
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(_Bool)arg3 showsWhenForeground:(_Bool)arg4;
- (id)initWithStatusBarStyleOverridesAssertionData:(id)arg1;
- (void)acquireWithHandler:(CDUnknownBlockType)arg1 invalidationHandler:(CDUnknownBlockType)arg2;
- (void)acquireWithHandler:(CDUnknownBlockType)arg1 onQueue:(id)arg2;

@end
