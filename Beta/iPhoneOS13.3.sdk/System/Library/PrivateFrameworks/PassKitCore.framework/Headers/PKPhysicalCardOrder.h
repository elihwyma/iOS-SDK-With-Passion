/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKPhysicalCardOrder : NSObject <Swift>

{
    unsigned long long _reason;
    NSString *_nameOnCard;
    NSString *_artworkIdentifier;
}

@property (nonatomic) unsigned long long reason;
@property (copy, nonatomic) NSString *nameOnCard;
@property (copy, nonatomic) NSString *artworkIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
