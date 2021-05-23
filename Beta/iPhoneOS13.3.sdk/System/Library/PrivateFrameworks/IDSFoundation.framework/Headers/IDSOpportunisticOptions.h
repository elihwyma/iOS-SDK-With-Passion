/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class NSArray, NSDate, NSDictionary;

@interface IDSOpportunisticOptions : NSObject <Swift>

{
    NSArray *_blacklistedDestinations;
    NSDate *_expiryDate;
    _Bool _destinationsMustBeInContacts;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSArray *blacklistedDestinations;
@property (retain, nonatomic) NSDate *expiryDate;
@property (nonatomic) _Bool destinationsMustBeInContacts;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithBlacklistedDestinations:(id)arg1 expiryDate:(id)arg2 destinationsMustBeInContacts:(_Bool)arg3;

@end
