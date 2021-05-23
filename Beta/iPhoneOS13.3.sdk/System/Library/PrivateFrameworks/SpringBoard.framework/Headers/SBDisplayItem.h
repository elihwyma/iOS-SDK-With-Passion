/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBDisplayItem : NSObject <Swift>

{
    NSString *_uniqueStringRepresentation;
    CDUnknownBlockType _sceneIdentifierFromBundleIdentifierGenerator;
    long long _type;
    NSString *_bundleIdentifier;
    NSString *_uniqueIdentifier;
}

@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;
@property (copy, nonatomic, readonly) NSString *webClipIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)displayItemWithType:(long long)arg1 bundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3;
+ (id)homeScreenDisplayItem;
+ (id)remoteAlertDisplayItemWithServiceBundleIdentifier:(id)arg1;
+ (id)switcherServiceDisplayItemWithServiceIdentifier:(id)arg1;
+ (id)webAppDisplayItemWithWebAppIdentifier:(id)arg1;
+ (id)applicationDisplayItemWithBundleIdentifier:(id)arg1 sceneIdentifier:(id)arg2;
+ (id)displayItemWithProtobufRepresentation:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithPlistRepresentation:(id)arg1;
- (id)plistRepresentation;
- (id)initWithType:(long long)arg1 bundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3;
- (id)uniqueStringRepresentation;
- (id)_calculateUniqueStringRepresentation;
- (id)_initWithPlistRepresentation:(id)arg1 sceneIdentifierFromBundleIdentifierGenerator:(CDUnknownBlockType)arg2;
- (id)_initWithDictionaryPlistRepresentation:(id)arg1;
- (id)_initWithArrayPlistRepresentation:(id)arg1;
- (id)_newSceneIdentifierForBundleIdentifier:(id)arg1;
- (id)_initWithLegacyPlistRepresentation:(id)arg1 sceneIdentifierFromBundleIdentifierGenerator:(CDUnknownBlockType)arg2;
- (id)initWithLegacyPlistRepresentation:(id)arg1;
- (id)protobufRepresentation;
- (_Bool)isHomeScreenDisplayItem;

@end
