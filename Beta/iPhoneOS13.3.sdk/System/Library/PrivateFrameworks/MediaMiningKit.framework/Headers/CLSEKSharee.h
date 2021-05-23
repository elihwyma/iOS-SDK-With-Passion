/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

#import <MediaMiningKit/Swift-Protocol.h>

@class NSString;

@interface CLSEKSharee : NSObject <Swift>

{
    _Bool _isCurrentUserForSharing;
    _Bool _isCurrentUserForScheduling;
    NSString *_emailAddress;
    NSString *_name;
    NSString *_UUID;
}

@property (readonly) NSString *UUID;
@property (readonly) NSString *emailAddress;
@property (readonly) NSString *name;
@property (readonly) _Bool isCurrentUserForSharing;
@property (readonly) _Bool isCurrentUserForScheduling;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKSharee:(id)arg1;

@end
