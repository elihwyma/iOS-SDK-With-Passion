/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface CXCallDirectoryPhoneNumberEntryData : NSObject

{
    NSData *_phoneNumberData;
}

@property (retain, nonatomic) NSData *phoneNumberData;
@property (nonatomic, readonly) const long long *phoneNumbers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long count;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)phoneNumberAtIndex:(unsigned long long)arg1;

@end
