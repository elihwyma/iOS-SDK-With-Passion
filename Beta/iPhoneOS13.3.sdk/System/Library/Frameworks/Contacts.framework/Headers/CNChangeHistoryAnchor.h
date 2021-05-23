/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSData;

@interface CNChangeHistoryAnchor : NSObject <Swift>

{
    long long _sequenceNumber;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long sequenceNumber;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithSequenceNumber:(long long)arg1;

@end
