/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@class AAUIServerHookResponse, NSSet, NSString;

@protocol AAUIServerHookDelegate;

@interface FALaunchServicesHook : NSObject

{
    NSSet *_urlSchemeWhitelist;
    id <AAUIServerHookDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (weak, nonatomic) id <AAUIServerHookDelegate> delegate;

- (_Bool)shouldMatchElement:(id)arg1;
- (_Bool)shouldMatchModel:(id)arg1;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithWhitelistedSchemes:(id)arg1;
- (void)_launchWithURLString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldOpenURL:(id)arg1;

@end
