/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, _UIAppearanceCustomizableClassInfo;

__attribute__((visibility("hidden")))
@interface _UIAppearance : NSObject

{
    NSArray *_containerList;
    NSMutableArray *_appearanceInvocations;
    NSMapTable *_invocationSources;
    _UIAppearanceCustomizableClassInfo *_customizableClassInfo;
}

@property (nonatomic, readonly) _UIAppearanceCustomizableClassInfo *_customizableClassInfo;

+ (_Bool)_hasCustomizationsForClass:(Class)arg1 guideClass:(Class)arg2;
+ (id)_appearanceForClass:(Class)arg1 withContainerList:(id)arg2;
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2;
+ (id)recursiveDescription;
+ (id)_windowsForSource:(id)arg1;
+ (id)_recorderForSource:(id)arg1;
+ (id)_rootAppearancesNode;
+ (void)_removeInvocationsForSource:(id)arg1;
+ (id)appearancesAtNode:(id)arg1 withObject:(id)arg2;
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3 onlySystemInvocations:(_Bool)arg4;
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3;
+ (id)_appearanceWithClassInfo:(id)arg1 containerList:(id)arg2;
+ (id)_appearanceNodeForClassInfo:(id)arg1 containerList:(id)arg2;
+ (id)_newAppearanceWithClassInfo:(id)arg1 containerList:(id)arg2;
+ (id)_currentAppearanceSource;
+ (id)_pendingRecordInvocationsForSource:(id)arg1;
+ (_Bool)_hasAnyCustomizations;
+ (void)_appendDescriptionOfNode:(id)arg1 toString:(id)arg2 atLevel:(unsigned long long)arg3;
+ (void)_setCurrentAppearanceSource:(id)arg1;
+ (void)_addWindow:(id)arg1 forSource:(id)arg2;
+ (void)_removeWindow:(id)arg1 forSource:(id)arg2;
+ (id)_recordersExcludingSource:(id)arg1 withWindow:(id)arg2;
+ (void)_setInvalidatesViewsOnAppearanceChange:(_Bool)arg1;

- (void)dealloc;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)_traitCollection;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(unsigned long long)arg2;
- (_Bool)_isValidAppearanceForCustomizableObject:(id)arg1;
- (void)_removeInvocationsForSource:(id)arg1;
- (SEL)_beginListeningForAppearanceEventsForSetter:(SEL)arg1;
- (_Bool)_isRecordingInvocations;
- (void)_invalidateAppearanceInWindow:(id)arg1;
- (void)_handleSetterInvocation:(id)arg1;
- (void)_handleGetterInvocation:(id)arg1;
- (id)_appearanceInvocations;

@end
