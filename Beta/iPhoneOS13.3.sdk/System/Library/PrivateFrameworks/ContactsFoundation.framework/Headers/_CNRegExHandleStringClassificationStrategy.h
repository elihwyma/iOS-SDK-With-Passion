/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _CNRegExHandleStringClassificationStrategy : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)doesStringLookLikePhoneNumber:(id)arg1;
+ (_Bool)doesStringLookLikeEmailAddress:(id)arg1;
+ (id)makePhoneNumberRegex;
+ (id)makeEmailRegex;

- (unsigned long long)classificationOfHandleString:(id)arg1;

@end
