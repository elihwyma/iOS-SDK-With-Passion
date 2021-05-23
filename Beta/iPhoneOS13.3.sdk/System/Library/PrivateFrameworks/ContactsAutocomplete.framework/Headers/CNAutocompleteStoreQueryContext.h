/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNCache;

@interface CNAutocompleteStoreQueryContext : NSObject

{
    CNCache *_directoryServerReuseCache;
    CNCache *_calendarServerReuseCache;
}

@property (readonly) CNCache *directoryServerReuseCache;
@property (readonly) CNCache *calendarServerReuseCache;

+ (id)cacheBoundaryStrategies;

- (id)init;

@end
