/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <vCard/CNVCardLineGenerator.h>

@interface CNVCardSocialProfileLineGenerator : CNVCardLineGenerator

- (id)lineWithValue:(id)arg1 label:(id)arg2;
- (void)addPrimaryValueMarkerToLine:(id)arg1;
- (void)addStandardLabel:(id)arg1 toLine:(id)arg2;
- (void)addCustomLabel:(id)arg1 toLine:(id)arg2;
- (_Bool)isStandardServiceName:(id)arg1;

@end
