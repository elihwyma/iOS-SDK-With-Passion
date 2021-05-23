/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface SFRemoteHotspotInfo : NSObject

{
    NSString *_name;
    NSString *_password;
    NSNumber *_channel;
}

@property (copy) NSString *name;
@property (copy) NSString *password;
@property (retain) NSNumber *channel;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 password:(id)arg2 channel:(id)arg3;

@end
