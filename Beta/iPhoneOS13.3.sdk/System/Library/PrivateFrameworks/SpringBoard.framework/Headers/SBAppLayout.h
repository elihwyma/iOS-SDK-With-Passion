/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface SBAppLayout : NSObject <Swift>

{
    long long _cachedAppLayoutType;
    _Bool _hidden;
    long long _configuration;
    long long _environment;
    NSDictionary *_rolesToLayoutItemsMap;
}

@property (copy, nonatomic) NSDictionary *rolesToLayoutItemsMap;
@property (nonatomic) long long configuration;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long environment;
@property (nonatomic, readonly, getter=isInsetForHomeAffordance) _Bool insetForHomeAffordance;
@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)homeScreenAppLayout;
+ (id)appLayoutWithProtobufRepresentation:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerate:(CDUnknownBlockType)arg1;
- (long long)compare:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)containsItem:(id)arg1;
- (id)allItems;
- (id)initWithPlistRepresentation:(id)arg1;
- (unsigned long long)frameOptions;
- (id)plistRepresentation;
- (id)protobufRepresentation;
- (id)itemForLayoutRole:(long long)arg1;
- (_Bool)containsItemWithUniqueIdentifier:(id)arg1;
- (_Bool)containsItemWithBundleIdentifier:(id)arg1;
- (id)initWithItemsForLayoutRoles:(id)arg1 configuration:(long long)arg2 environment:(long long)arg3;
- (id)appLayoutWithItemsPassingTest:(CDUnknownBlockType)arg1;
- (id)appLayoutByModifyingHiddenState:(_Bool)arg1;
- (_Bool)containsAnyItemFromSet:(id)arg1;
- (id)initWithItemsForLayoutRoles:(id)arg1 configuration:(long long)arg2 environment:(long long)arg3 hidden:(_Bool)arg4;
- (long long)layoutRoleForItem:(id)arg1;

@end
