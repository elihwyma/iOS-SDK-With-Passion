/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteQueryCacheMissLogger, NSArray;

@interface CNAutocompleteQueryCacheMissAuditor : NSObject

{
    CNAutocompleteQueryCacheMissLogger *_logger;
    NSArray *_cachedResults;
}

@property (retain) CNAutocompleteQueryCacheMissLogger *logger;
@property (copy) NSArray *cachedResults;

- (id)init;
- (id)description;
- (id)initWithLogger:(id)arg1;
- (void)didReturnCachedResults:(id)arg1;
- (void)didReturnLiveResults:(id)arg1;

@end
