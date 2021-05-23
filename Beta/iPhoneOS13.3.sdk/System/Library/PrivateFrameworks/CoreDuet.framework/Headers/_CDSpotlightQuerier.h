/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@interface _CDSpotlightQuerier : NSObject

+ (id)queryStringForMail;
+ (id)queryStringForMessages;
+ (id)orQueryStrings:(id)arg1;
+ (id)querySpotlightForPredicateString:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)queryStringWithPredicateStr:(id)arg1 userEmails:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)mdSearchableQueryAttributes;
+ (id)osxUTItoUniqueIdentifierKeyMap;
+ (id)contentTypeKey;
+ (id)queryAttributesForUniqueIdentifierAttributeOSX;
+ (id)osxBundleIdForUTI:(id)arg1;
+ (id)uniqueIdentifierKeyForUTI:(id)arg1;
+ (id)keywordsFromString:(id)arg1;

- (id)requestQuery:(id)arg1;

@end
