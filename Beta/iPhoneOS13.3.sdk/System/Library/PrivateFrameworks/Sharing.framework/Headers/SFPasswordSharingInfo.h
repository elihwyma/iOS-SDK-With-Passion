/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface SFPasswordSharingInfo : NSObject

{
    NSNumber *_channel;
    NSString *_networkName;
    NSString *_psk;
}

@property (retain, nonatomic) NSNumber *channel;
@property (retain, nonatomic) NSString *networkName;
@property (retain, nonatomic) NSString *psk;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
