/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMObjectID.h>

#import <Email/Swift-Protocol.h>

@class NSString, NSURL;

@interface EMMailboxObjectID : EMObjectID <Swift>

{
    NSURL *_url;
}

@property (nonatomic, readonly) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;

@end
