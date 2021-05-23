/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class NSString;

@interface FBSSceneSpecification : NSObject <Swift>

{
    _Bool _forLocalSynchronousSceneClientProvider;
}

@property (nonatomic, readonly) Class hostAgentClass;
@property (nonatomic, readonly) Class clientAgentClass;
@property (nonatomic, readonly) Class settingsClass;
@property (nonatomic, readonly) Class clientSettingsClass;
@property (nonatomic, readonly) Class transitionContextClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)specification;
+ (CDUnknownFunctionPointerType)_swizzleMethodOnClass:(Class)arg1 originalSelector:(SEL)arg2 block:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_copyForLocalSynchronousSceneClientProvider;

@end
