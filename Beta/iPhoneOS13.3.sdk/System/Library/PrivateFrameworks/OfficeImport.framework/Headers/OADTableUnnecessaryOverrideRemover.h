/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADTableStyleResolver.h>

@class OADTextListStyle;

__attribute__((visibility("hidden")))
@interface OADTableUnnecessaryOverrideRemover : OADTableStyleResolver

{
    OADTextListStyle *_parentTextListStyle;
}

@property (nonatomic, readonly) OADTextListStyle *parentTextListStyle;

- (void)applyTextStyle:(id)arg1 toParagraph:(id)arg2;
- (void)applyResolvedPartStyle:(id)arg1 leftStroke:(id)arg2 rightStroke:(id)arg3 topStroke:(id)arg4 bottomStroke:(id)arg5 toCell:(id)arg6;
- (void)fixFill:(id)arg1;
- (void)applyTextBodyPropertiesToCellPropertiesInCell:(id)arg1;
- (void)removeUnnecessaryOverridesInCellProperties:(id)arg1 strokeType:(int)arg2 resolvedStroke:(id)arg3;
- (id)initWithTable:(id)arg1 parentTextListStyle:(id)arg2;

@end
