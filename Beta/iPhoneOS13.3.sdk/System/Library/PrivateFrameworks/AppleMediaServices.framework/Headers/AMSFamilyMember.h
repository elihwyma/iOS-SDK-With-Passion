/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface AMSFamilyMember : NSObject

{
    _Bool _askToBuyEnabled;
    _Bool _currentSignedInUser;
    _Bool _sharingPurchases;
    NSString *_firstName;
    NSNumber *_iCloudDSID;
    NSString *_iCloudUsername;
    NSNumber *_iTunesDSID;
    NSString *_iTunesUsername;
    NSString *_lastName;
}

@property (nonatomic, getter=isCurrentSignedInUser) _Bool currentSignedInUser;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, getter=isAskToBuyEnabled) _Bool askToBuyEnabled;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSNumber *iCloudDSID;
@property (nonatomic, readonly) NSString *iCloudUsername;
@property (nonatomic, readonly) NSNumber *iTunesDSID;
@property (nonatomic, readonly) NSString *iTunesUsername;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly, getter=isSharingPurchases) _Bool sharingPurchases;

- (id)description;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
