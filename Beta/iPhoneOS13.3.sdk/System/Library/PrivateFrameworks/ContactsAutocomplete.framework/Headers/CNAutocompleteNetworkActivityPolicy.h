/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNAutocompleteNetworkActivityPolicy : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)policyWithNoDelay;
+ (id)policyWithThrottlingDelayForString:(id)arg1;

- (_Bool)shouldSearchServers;
- (double)delayBeforeBeginningNetworkActivity;

@end
