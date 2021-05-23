/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSData, NSMutableDictionary, NSNumber;

@interface ICDelegationPlayInfoTokenRequest : NSObject <Swift>

{
    NSNumber *_DSID;
    NSData *_cloudCredentialsTokenData;
    NSData *_SICData;
}

@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSData *cloudCredentialsTokenData;
@property (copy, nonatomic) NSData *SICData;
@property (copy, nonatomic, readonly) NSMutableDictionary *propertyListRepresentation;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDSID:(id)arg1 SICData:(id)arg2;

@end
