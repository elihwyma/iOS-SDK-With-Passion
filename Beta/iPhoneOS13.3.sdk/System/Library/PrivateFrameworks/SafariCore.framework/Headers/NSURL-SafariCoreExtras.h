/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSURL.h>

@interface NSURL (SafariCoreExtras)

+ (struct _NSRange)safari_hostAndPortRangeFromUserTypedString:(id)arg1;

- (id)_labelsOfDomainWithoutWWWOrMSubdomains:(id)arg1;
- (_Bool)safari_isSubdomainOfDomain:(id)arg1;

@end
