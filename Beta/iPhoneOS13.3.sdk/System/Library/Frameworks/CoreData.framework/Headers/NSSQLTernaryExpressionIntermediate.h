/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLExpressionIntermediate.h>

@class NSArray, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate

{
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    _Bool _disambiguationKeypathHasToMany;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)disambiguatingEntity;
- (id)disambiguationKeypath;
- (_Bool)disambiguationKeypathHasToMany;
- (void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(_Bool)arg3;
- (id)_generateSQLForPredicate:(id)arg1 inContext:(id)arg2;

@end
