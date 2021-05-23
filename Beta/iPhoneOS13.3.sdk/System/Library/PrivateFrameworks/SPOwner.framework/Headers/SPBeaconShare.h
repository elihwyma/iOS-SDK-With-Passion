/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSUUID, SPHandle;

@interface SPBeaconShare : NSObject

{
    _Bool _accepted;
    NSUUID *_identifier;
    SPHandle *_handle;
    NSDate *_expiration;
    NSString *_correlationIdentifier;
}

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) SPHandle *handle;
@property (nonatomic) _Bool accepted;
@property (copy, nonatomic) NSDate *expiration;
@property (copy, nonatomic) NSString *correlationIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 accepted:(_Bool)arg3 expiration:(id)arg4 correlationIdentifier:(id)arg5;

@end
