/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet;

@interface CHStrokeClassificationResult : NSObject

{
    NSSet *_textStrokeIdentifiers;
    NSDictionary *_strokeClassificationsByStrokeIdentifier;
    NSDictionary *_substrokesByStrokeIdentifier;
    NSSet *_nontextCandidates;
}

@property (copy, nonatomic, readonly) NSDictionary *strokeClassificationsByStrokeIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *substrokesByStrokeIdentifier;
@property (copy, nonatomic, readonly) NSSet *textStrokeIdentifiers;
@property (copy, nonatomic, readonly) NSSet *nontextCandidates;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 nontextCandidates:(id)arg3;
- (_Bool)isEquivalentToStrokeClassificationResult:(id)arg1;

@end
