/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteAggdProbe, NSString;

@interface _CNAutocompleteQueryCacheMissAggdLogging : NSObject

{
    CNAutocompleteAggdProbe *_probe;
}

@property (readonly) CNAutocompleteAggdProbe *probe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)didReturnCacheFalseNegatives:(id)arg1;
- (void)didReturnCacheFalsePositives:(id)arg1;
- (id)initWithProbe:(id)arg1;

@end
