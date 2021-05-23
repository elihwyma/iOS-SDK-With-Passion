/*
 Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

#import <Foundation/NSNumber.h>

@interface NSNumber (CoreRecentsUtilities)

+ (id)cr_numberWithCRRecentID:(long long)arg1;
+ (id)cr_numberWithCRContactID:(long long)arg1;
+ (id)cr_numberWithCRContactGroupKind:(unsigned long long)arg1;

- (long long)cr_CRRecentIDValue;
- (long long)cr_CRContactIDValue;
- (unsigned long long)cr_CRContactGroupKindValue;

@end
