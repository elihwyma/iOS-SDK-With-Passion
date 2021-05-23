/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <Foundation/NSString.h>

@class ECEmailAddress;

@interface NSString (ECEmailAddressQuoting)

@property (copy, nonatomic, readonly) NSString *ecemailaddress_trimmedAndQuotedLocalPart;
@property (copy, nonatomic, readonly) NSString *ecemailaddress_trimmedAndQuotedDisplayName;
@property (copy, nonatomic, readonly) NSString *ecemailaddress_uniquedDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) ECEmailAddress *emailAddressValue;
@property (nonatomic, readonly) NSString *stringValue;
@property (copy, readonly) NSString *ec_messageIDSubstring;

- (id)ecemailaddress_quotedString;

@end
