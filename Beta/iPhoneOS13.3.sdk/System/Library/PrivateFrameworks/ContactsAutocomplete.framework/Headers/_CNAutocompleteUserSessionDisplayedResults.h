/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteFetchRequest, NSMutableDictionary;

@interface _CNAutocompleteUserSessionDisplayedResults : NSObject

{
    _Bool _ignored;
    _Bool _containsDuetResults;
    CNAutocompleteFetchRequest *_request;
    NSMutableDictionary *_datesByBatchIndexes;
}

@property (nonatomic, readonly) CNAutocompleteFetchRequest *request;
@property (retain, nonatomic) NSMutableDictionary *datesByBatchIndexes;
@property (nonatomic) _Bool ignored;
@property (nonatomic) _Bool containsDuetResults;

- (id)initWithRequest:(id)arg1;
- (_Bool)relevantForRequest:(id)arg1;
- (void)didReceiveBatch:(unsigned long long)arg1;

@end
