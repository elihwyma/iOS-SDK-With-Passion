/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CNAutocompleteQueryCacheMissLogger : NSObject

{
    NSArray *_loggers;
}

@property (copy) NSArray *loggers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithLoggers:(id)arg1;
- (void)didReturnCacheFalseNegatives:(id)arg1;
- (void)didReturnCacheFalsePositives:(id)arg1;

@end
