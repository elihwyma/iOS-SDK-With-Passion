/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNAutocompleteNetworkActivityThrottlingPolicy : NSObject

{
    unsigned long long _lengthOfString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithString:(id)arg1;
- (_Bool)shouldSearchServers;
- (double)delayBeforeBeginningNetworkActivity;

@end
