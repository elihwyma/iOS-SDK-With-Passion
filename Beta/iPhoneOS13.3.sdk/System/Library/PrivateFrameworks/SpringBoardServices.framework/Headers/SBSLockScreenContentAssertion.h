/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString, SBSLockScreenContentAction;

@interface SBSLockScreenContentAssertion : NSObject

{
    NSString *_slot;
    NSString *_identifier;
    id _configurationObject;
    SBSLockScreenContentAction *_action;
    CDUnknownBlockType _errorHandler;
}

@property (retain, nonatomic) NSString *slot;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) id configurationObject;
@property (retain, nonatomic) SBSLockScreenContentAction *action;
@property (copy, nonatomic, getter=_errorHandler, setter=_setErrorHandler:) CDUnknownBlockType errorHandler;

+ (id)acquireContentProviderAssertionForType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 configurationObject:(id)arg4 errorHandler:(CDUnknownBlockType)arg5;
+ (_Bool)_isRestrictedDevice;
+ (id)acquireContentProviderAssertionForType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;

- (void)dealloc;
- (void)invalidate;
- (unsigned long long)type;
- (id)initWithType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 configurationObject:(id)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)_acquireAssertionWithType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 configurationObject:(id)arg4;

@end
