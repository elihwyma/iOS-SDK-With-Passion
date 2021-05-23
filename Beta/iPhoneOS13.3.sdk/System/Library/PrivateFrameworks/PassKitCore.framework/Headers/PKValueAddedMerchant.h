/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData;

@interface PKValueAddedMerchant : NSObject <Swift>

{
    NSData *_identifier;
    long long _timesPresented;
}

@property (retain, nonatomic) NSData *identifier;
@property (nonatomic) long long timesPresented;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
