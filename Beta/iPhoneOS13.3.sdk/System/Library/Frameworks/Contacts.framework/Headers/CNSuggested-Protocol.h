/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/Swift-Protocol.h>

@class NSString, SGRecordId;

@protocol CNSuggested <Swift>

@property (nonatomic, readonly, getter=isSuggested) _Bool suggested;
@property (nonatomic, readonly) SGRecordId *suggestionRecordId;
@property (nonatomic, readonly) NSString *suggestionFoundInBundleId;

@end
