/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLWhereIntermediate.h>

@class NSArray, NSMutableArray, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate

{
    NSMutableArray *_subclauses;
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    _Bool _disambiguationKeypathHasToMany;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;
- (id)disambiguatingEntity;
- (id)disambiguationKeypath;
- (_Bool)disambiguationKeypathHasToMany;
- (id)_generateMulticlauseStringInContext:(id)arg1;
- (_Bool)isOrScoped;
- (void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(_Bool)arg3;

@end
