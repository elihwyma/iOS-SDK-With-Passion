/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADDrawable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface OADGroup : OADDrawable

{
    struct CGRect mLogicalBounds;
    NSMutableArray *mChildren;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addChild:(id)arg1;
- (id)children;
- (void)removeChild:(id)arg1;
- (void)addChildren:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (unsigned long long)childCount;
- (struct CGRect)logicalBounds;
- (void)setLogicalBounds:(struct CGRect)arg1;
- (id)groupProperties;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;

@end
