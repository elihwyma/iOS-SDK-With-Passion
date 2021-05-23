/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSNumber;

@interface PKFelicaShinkansenTicket : NSObject <Swift>

{
    NSArray *_trains;
    NSNumber *_validityStartDate;
    NSNumber *_validityTerm;
}

@property (copy, nonatomic, readonly) NSArray *trains;
@property (copy, nonatomic, readonly) NSNumber *validityStartDate;
@property (copy, nonatomic, readonly) NSNumber *validityTerm;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
