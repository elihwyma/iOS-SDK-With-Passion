/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <Foundation/NSFormatter.h>

@interface MSSendMailIntentFormatter : NSFormatter

- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (_Bool)allowsReverseTransformation;
- (id)_stringForAddresses:(id)arg1;

@end
