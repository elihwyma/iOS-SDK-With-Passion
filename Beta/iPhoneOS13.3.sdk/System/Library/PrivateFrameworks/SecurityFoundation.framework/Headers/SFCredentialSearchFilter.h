/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

#import <SecurityFoundation/Swift-Protocol.h>

@class NSArray, NSDate, NSPredicate;

@protocol _SFServiceIdentifier;

@interface SFCredentialSearchFilter : NSObject <Swift>

{
    id _credentialSearchFilterInternal;
    NSPredicate *_attributesPredicate;
}

@property (retain, nonatomic) NSDate *minimumCreationDate;
@property (retain, nonatomic) NSDate *maximumCreationDate;
@property (retain, nonatomic) NSDate *minimumModificationDate;
@property (retain, nonatomic) NSDate *maximumModificationDate;
@property (retain, nonatomic) NSArray<_SFServiceIdentifier> *serviceIdentifiers;
@property (retain, nonatomic) NSArray *usernames;
@property (retain, nonatomic) NSPredicate *attributesPredicate;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
