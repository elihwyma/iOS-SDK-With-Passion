/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSSceneClientSettings.h>

@class NSOrderedSet, NSSet, NSString;

@interface FBSMutableSceneClientSettings : FBSSceneClientSettings

@property (copy, nonatomic, setter=_setLayers:) NSOrderedSet *layers;
@property (nonatomic) double preferredLevel;
@property (nonatomic) long long preferredInterfaceOrientation;
@property (copy, nonatomic) NSSet *occlusions;
@property (copy, nonatomic) NSString *preferredSceneHostIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_isMutable;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)otherSettings;

@end
