/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNObservable;

@interface CNAutocompleteCalendarQueryAssembler : NSObject

{
    CNObservable *_cachedObservable;
    CNObservable *_uncachedObservable;
    CNObservable *_rawCachedObservable;
    CNObservable *_rawUncachedObservable;
}

@property (readonly) CNObservable *rawCachedObservable;
@property (readonly) CNObservable *rawUncachedObservable;
@property (readonly) CNObservable *cachedObservable;
@property (readonly) CNObservable *uncachedObservable;

- (id)description;
- (id)initWithRawCachedObservable:(id)arg1 rawUncachedObservable:(id)arg2;
- (void)assemble;

@end
