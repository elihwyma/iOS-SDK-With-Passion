/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class AAUIServerHookResponse, NSString;

@protocol AAUIServerHookDelegate;

@interface AAUIDeviceToDeviceEncryptionHook : NSObject

{
    id <AAUIServerHookDelegate> delegate;
    NSString *_altDSID;
    NSString *_context;
}

@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (weak, nonatomic) id <AAUIServerHookDelegate> delegate;

- (void)_performHSAUpgradeWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldMatchElement:(id)arg1;
- (_Bool)shouldMatchModel:(id)arg1;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAltDSID:(id)arg1 upgradeContext:(id)arg2;

@end
