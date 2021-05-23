/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class BSSettings, NSOrderedSet, NSSet, NSString;

@interface FBSSceneClientSettings : NSObject

{
    NSOrderedSet *_layers;
    double _preferredLevel;
    long long _preferredInterfaceOrientation;
    NSSet *_occlusions;
    NSString *_preferredSceneHostIdentifier;
    BSSettings *_otherSettings;
}

@property (copy, nonatomic, readonly) NSOrderedSet *layers;
@property (nonatomic, readonly) double preferredLevel;
@property (nonatomic, readonly) long long preferredInterfaceOrientation;
@property (copy, nonatomic, readonly) NSSet *occlusions;
@property (copy, nonatomic, readonly) NSString *preferredSceneHostIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)settings;
+ (_Bool)supportsBSXPCSecureCoding;
+ (_Bool)_isMutable;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithSettings:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)otherSettings;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 debug:(_Bool)arg2;

@end
