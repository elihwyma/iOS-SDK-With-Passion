/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@interface SiriUIComponentConstraintFactory : NSObject

{
    struct NSMutableDictionary *_layoutStyleToComponentLayoutMaps;
}

+ (id)sharedConstraintFactory;

- (id)init;
- (id)topConstraintForView:(id)arg1 fromLayoutGuide:(id)arg2 templateComponent:(id)arg3 layoutStyle:(long long)arg4;
- (id)bottomConstraintForView:(id)arg1 fromLayoutGuide:(id)arg2 templateComponent:(id)arg3 layoutStyle:(long long)arg4;
- (id)verticalConstraintFromUpperView:(id)arg1 lowerView:(id)arg2 upperTemplateComponent:(id)arg3 lowerTemplateComponent:(id)arg4 layoutStyle:(long long)arg5;
- (void)_setupMaps;
- (struct NSMutableDictionary *)_createMapForLayoutStyle:(long long)arg1;
- (void)_addConstants:(struct NSDictionary *)arg1 forLowerComponentStyle:(unsigned long long)arg2 toMap:(struct NSMutableDictionary *)arg3;
- (unsigned long long)_componentTypeForView:(id)arg1 component:(id)arg2;
- (long long)_layoutAttributeForView:(id)arg1 componentType:(unsigned long long)arg2 isLower:(_Bool)arg3;
- (id)_bestDistanceFromComponentType:(unsigned long long)arg1 toComponentType:(unsigned long long)arg2 layoutStyle:(long long)arg3;
- (id)topConstraintForView:(id)arg1 inSuperview:(id)arg2 templateComponent:(id)arg3 layoutStyle:(long long)arg4;
- (id)bottomConstraintForView:(id)arg1 inSuperview:(id)arg2 templateComponent:(id)arg3 layoutStyle:(long long)arg4;

@end
