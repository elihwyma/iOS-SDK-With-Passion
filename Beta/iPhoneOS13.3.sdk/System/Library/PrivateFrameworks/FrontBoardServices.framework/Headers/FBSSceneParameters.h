/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class FBSSceneClientSettings, FBSSceneSettings, FBSSceneSpecification, NSString;

@interface FBSSceneParameters : NSObject <Swift>

{
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
    FBSSceneSpecification *_specification;
}

@property (copy, nonatomic) FBSSceneSettings *settings;
@property (copy, nonatomic) FBSSceneClientSettings *clientSettings;
@property (copy, nonatomic, readonly) FBSSceneSpecification *specification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)parametersForSpecification:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)updateSettingsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithSpecification:(id)arg1;
- (void)_configureCopy:(id)arg1;

@end
