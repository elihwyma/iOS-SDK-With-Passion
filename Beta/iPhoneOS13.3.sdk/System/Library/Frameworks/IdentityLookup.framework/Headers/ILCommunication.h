/*
 Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface ILCommunication : NSObject

{
    NSString *_sender;
    NSDate *_dateReceived;
}

@property (copy, nonatomic, readonly) NSString *sender;
@property (copy, nonatomic, readonly) NSDate *dateReceived;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSender:(id)arg1 dateReceived:(id)arg2;
- (_Bool)isEqualToCommunication:(id)arg1;

@end
