/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXDialectMap, NSMutableOrderedSet, NSString;

@interface AXLanguageTag : NSObject

{
    _Bool _wasPredicted;
    _Bool _createdFromNewline;
    NSString *_content;
    NSMutableOrderedSet *_unambiguousDialects;
    NSMutableOrderedSet *_ambiguousDialects;
    NSMutableOrderedSet *_predictedSecondaryDialects;
    struct _NSRange _range;
}

@property (nonatomic) struct _NSRange range;
@property (weak, nonatomic) NSString *content;
@property (retain, nonatomic) NSMutableOrderedSet *unambiguousDialects;
@property (retain, nonatomic) NSMutableOrderedSet *ambiguousDialects;
@property (retain, nonatomic) NSMutableOrderedSet *predictedSecondaryDialects;
@property (weak, nonatomic, readonly) AXDialectMap *preferredAmbiguousDialect;
@property (weak, nonatomic, readonly) AXDialectMap *preferredUnambiguousDialect;
@property (weak, nonatomic, readonly) NSString *contentSubstring;
@property (weak, nonatomic, readonly) AXDialectMap *dialect;
@property (nonatomic) _Bool wasPredicted;
@property (nonatomic) _Bool createdFromNewline;

+ (id)tagWithDialects:(id)arg1 range:(struct _NSRange)arg2 content:(id)arg3 predictedByTagger:(_Bool)arg4;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canBeSpokenByLanguage:(id)arg1;
- (void)addAmbiguousDialect:(id)arg1;
- (void)addUnambiguousDialect:(id)arg1;
- (_Bool)canBeSpokenByDialect:(id)arg1;
- (_Bool)hasAmbigiousDialects;
- (void)addAmbiguousDialects:(id)arg1;
- (void)addPredictedSecondaryDialects:(id)arg1;

@end
