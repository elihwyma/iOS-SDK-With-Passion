/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _CNAutocompleteObservableBuilderBatchingHelper : NSObject

{
    NSArray *_batches;
}

@property (nonatomic, readonly) NSArray *batches;

- (id)initWithBatchCount:(unsigned long long)arg1;
- (id)batchedObservables;
- (void)addObservable:(id)arg1 toBatchAtIndex:(unsigned long long)arg2;

@end
