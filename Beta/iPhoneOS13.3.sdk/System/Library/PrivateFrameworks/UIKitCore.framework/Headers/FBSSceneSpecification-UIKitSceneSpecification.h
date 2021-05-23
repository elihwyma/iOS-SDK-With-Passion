/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <FrontBoardServices/FBSSceneSpecification.h>

@class NSArray, NSDictionary, NSString;

@interface FBSSceneSpecification (UIKitSceneSpecification)

@property (nonatomic, readonly) NSArray *initialSettingsDiffActions;
@property (nonatomic, readonly) NSArray *finalSettingsDiffActions;
@property (nonatomic, readonly) NSArray *initialActionHandlers;
@property (nonatomic, readonly) NSArray *finalActionHandlers;
@property (nonatomic, readonly) NSDictionary *baseSceneComponentClassDictionary;
@property (nonatomic, readonly) NSString *uiSceneSessionRole;
@property (nonatomic, readonly) Class sceneSubstrateClass;
@property (nonatomic, readonly) Class lifecycleMonitorClass;
@property (nonatomic, readonly) Class uiSceneMinimumClass;
@property (nonatomic, readonly) _Bool isUIKitManaged;
@property (nonatomic, readonly) _Bool isInternal;

- (id)disconnectionHandlers;
- (id)connectionHandlers;

@end
