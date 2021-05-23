/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class AAUIServerHookResponse, NSString;

@protocol AAUIServerHookDelegate;

@interface AAUICDPRecoveryKeyHook : NSObject

{
    id <AAUIServerHookDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (weak, nonatomic) id <AAUIServerHookDelegate> delegate;

+ (id)helperWithPresenter:(id)arg1 forceInline:(_Bool)arg2;

- (_Bool)shouldMatchElement:(id)arg1;
- (_Bool)shouldMatchModel:(id)arg1;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldMatchAction:(id)arg1;
- (void)_generateRecoveryKeyWithType:(long long)arg1 attributes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_deleteRecoveryKey:(CDUnknownBlockType)arg1;

@end
