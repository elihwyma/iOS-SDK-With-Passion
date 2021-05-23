/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

#import <MediaMiningKit/Swift-Protocol.h>

@class NSString, NSURL;

@interface CLSEKParticipant : NSObject <Swift>

{
    _Bool _isCurrentUser;
    long long _participantStatus;
    NSString *_emailAddress;
    NSString *_name;
    long long _participantType;
    NSURL *_URL;
}

@property (readonly) long long participantStatus;
@property (readonly) NSURL *URL;
@property (readonly) NSString *emailAddress;
@property (readonly) NSString *name;
@property (readonly) _Bool isCurrentUser;
@property (readonly) long long participantType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKParticipant:(id)arg1;

@end
