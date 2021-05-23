/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SBSRemoteAlertDefinition : NSObject

{
    _Bool _forCarPlay;
    NSString *_serviceName;
    NSString *_viewControllerClassName;
    NSDictionary *_userInfo;
    NSString *_impersonatedCarPlayAppIdentifier;
}

@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *impersonatedCarPlayAppIdentifier;
@property (nonatomic, getter=isForCarPlay) _Bool forCarPlay;
@property (copy, nonatomic, readonly) NSString *serviceName;
@property (copy, nonatomic, readonly) NSString *viewControllerClassName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2;

@end
