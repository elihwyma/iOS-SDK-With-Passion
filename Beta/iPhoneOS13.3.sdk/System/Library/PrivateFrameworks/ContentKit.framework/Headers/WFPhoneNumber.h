/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSString;

@interface WFPhoneNumber : NSObject <Swift>

{
    NSString *_string;
    NSString *_contactName;
    NSString *_label;
}

@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSString *formattedPhoneNumber;
@property (nonatomic, readonly) NSString *normalizedPhoneNumber;
@property (nonatomic, readonly) NSString *contactName;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *localizedLabel;
@property (copy, nonatomic, readonly) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (_Bool)stringContainsPhoneNumbers:(id)arg1;
+ (id)phoneNumberWithPhoneNumberString:(id)arg1;
+ (id)phoneNumberUtil;
+ (id)phoneNumbersInString:(id)arg1 error:(id *)arg2;
+ (id)phoneNumberWithTextCheckingResult:(id)arg1;
+ (id)phoneNumberWithPhoneNumberString:(id)arg1 contactName:(id)arg2 label:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)region;
- (id)wfSerializedRepresentation;
- (id)initWithPhoneNumberString:(id)arg1 contactName:(id)arg2 label:(id)arg3;

@end
