/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailFoundation/EFPrivacy.h>

@interface EFPrivacy (EmailCore)

+ (id)ec_partiallyRedactedStringForSubjectOrSummary:(id)arg1;
+ (id)ec_partiallyRedactedStringForAddress:(id)arg1 localPart:(id)arg2 domain:(id)arg3;
+ (id)ec_redactedStringForMailboxURL:(id)arg1;

@end
