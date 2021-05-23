/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface CNCalculatesMultiValueDiff : NSObject

{
    NSArray *_multiValue1;
    NSArray *_multiValue2;
    NSOrderedSet *_originalIdentifiers;
    NSOrderedSet *_finalIdentifiers;
    NSMutableOrderedSet *_addedIdentifiers;
    NSMutableOrderedSet *_removedIdentifiers;
    NSMutableOrderedSet *_sameIdentifiers;
    NSMutableOrderedSet *_calculatedFinalIdentifiers;
    NSMutableArray *_updates;
}

+ (id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2;

- (id)updates;
- (id)initWithMultiValue1:(id)arg1 multiValue2:(id)arg2;
- (void)calculateDiff;
- (void)setupOriginalIdentifiers;
- (void)setupFinalIdentifiers;
- (void)setupAddedIdentifiers;
- (void)setupRemovedIdentifiers;
- (void)setupSameIdentifiers;
- (void)setupCalculatedFinalIdentifiers;
- (void)appendRemoveUpdates;
- (void)appendAddUpdates;
- (void)appendReplaceUpdates;
- (void)appendReorderUpdates;

@end
