/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNTask.h>

@class NSString;

@interface CNEmailAddressSanitizationTask : CNTask

{
    NSString *_address;
}

- (id)description;
- (id)initWithAddress:(id)arg1;
- (id)run:(id *)arg1;
- (void)removeMailtoPrefix;

@end
