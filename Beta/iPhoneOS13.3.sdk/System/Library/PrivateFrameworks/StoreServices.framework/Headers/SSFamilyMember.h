/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSNumber, NSString;

@interface SSFamilyMember : NSObject

{
    _Bool _askToBuy;
    NSString *_firstName;
    NSString *_iCloudAccountName;
    NSNumber *_iCloudIdentifier;
    NSNumber *_iTunesIdentifier;
    NSString *_lastName;
    _Bool _me;
    _Bool _sharingPurchases;
}

@property (retain, nonatomic) NSNumber *iTunesIdentifier;
@property (retain, nonatomic) NSNumber *iCloudIdentifier;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *iCloudAccountName;
@property (nonatomic, getter=isMe) _Bool me;
@property (nonatomic, getter=isSharingPurchases) _Bool sharingPurchases;
@property (nonatomic, readonly) _Bool askToBuy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)newCacheRepresentation;

@end
