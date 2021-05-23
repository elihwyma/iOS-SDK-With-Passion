/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSNumber;

@interface PKFelicaGreenCarTicket : NSObject <Swift>

{
    _Bool _refunded;
    NSData *_originStation;
    NSData *_destinationStation;
    NSNumber *_validityStartDate;
}

@property (copy, nonatomic, readonly) NSData *originStation;
@property (copy, nonatomic, readonly) NSData *destinationStation;
@property (copy, nonatomic, readonly) NSNumber *validityStartDate;
@property (nonatomic, readonly, getter=isRefunded) _Bool refunded;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
