/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_os_log;

@interface _CNAutocompleteQueryCacheMissOSLogging : NSObject

{
    NSObject<OS_os_log> *_os_log;
}

@property (readonly) NSObject<OS_os_log> *os_log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)didReturnCacheFalseNegatives:(id)arg1;
- (void)didReturnCacheFalsePositives:(id)arg1;

@end
