/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestResponse.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSDictionary;

@interface ASDIAPInfoResponse : ASDRequestResponse <Swift>

{
    NSDictionary *_iaps;
}

@property (nonatomic, readonly) NSDictionary *iaps;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIAPs:(id)arg1;

@end
