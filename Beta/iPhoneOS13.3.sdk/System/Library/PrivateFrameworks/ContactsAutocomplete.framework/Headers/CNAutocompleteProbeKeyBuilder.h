/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CNAutocompleteProbeKeyBuilder : NSObject

{
    NSString *_key;
    NSArray *_prefixes;
    NSArray *_suffixes;
}

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSArray *prefixes;
@property (retain, nonatomic) NSArray *suffixes;

+ (id)builderWithKey:(id)arg1;

- (id)init;
- (id)initWithKey:(id)arg1;
- (id)build;
- (id)prediction;
- (void)useString:(id)arg1 forSuffixAtIndex:(unsigned long long)arg2;
- (id)addDuetReturnedResults:(_Bool)arg1;
- (id)addBatchIndex:(unsigned long long)arg1;
- (id)prefixedSearch;
- (id)addDuetModelID;

@end
