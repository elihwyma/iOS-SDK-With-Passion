/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

@interface ICDelegationPlayInfoRequest : NSObject <Swift>

{
    NSString *_playerDeviceGUID;
    NSArray *_tokenRequests;
    NSData *_playerAnisetteMID;
    NSString *_playerUserAgent;
}

@property (copy, nonatomic) NSData *playerAnisetteMID;
@property (copy, nonatomic) NSString *playerDeviceGUID;
@property (copy, nonatomic) NSString *playerUserAgent;
@property (copy, nonatomic) NSArray *tokenRequests;
@property (copy, nonatomic, readonly) NSMutableDictionary *propertyListRepresentation;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
