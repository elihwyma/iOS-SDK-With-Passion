/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

#import <SpringBoardUI/Swift-Protocol.h>

@class FBProcess, NSDictionary, NSString;

@protocol FBSProcess, SBLockScreenPluginLifecycleObserver;

@interface SBLockScreenPluginContext : NSObject <Swift>

{
    NSString *_name;
    NSDictionary *_userInfo;
    FBProcess<FBSProcess> *_process;
    CDUnknownBlockType _auxiliaryAnimation;
    id <SBLockScreenPluginLifecycleObserver> _observer;
}

@property (retain, nonatomic) FBProcess<FBSProcess> *process;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) id <SBLockScreenPluginLifecycleObserver> observer;
@property (copy, nonatomic) CDUnknownBlockType auxiliaryAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contextWithName:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
