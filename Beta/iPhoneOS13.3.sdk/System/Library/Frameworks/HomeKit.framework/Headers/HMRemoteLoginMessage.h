/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HMFoundation/HMFObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface HMRemoteLoginMessage : HMFObject <Swift>

{
    NSString *_sessionID;
    NSError *_error;
}

@property (nonatomic, readonly) NSString *sessionID;
@property (retain, nonatomic) NSError *error;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionID:(id)arg1;
- (id)initNewMessage;

@end
