/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSDate, NSString, NSURL;

@interface ICBook : NSObject <Swift>

{
    _Bool _vppLicensed;
    unsigned long long _purchaseHistoryID;
    unsigned long long _storeID;
    NSString *_title;
    NSString *_author;
    NSString *_genre;
    NSDate *_datePurchased;
    NSURL *_artworkURL;
    NSString *_redownloadParameters;
    NSString *_vppOrganizationID;
    NSString *_vppOrganizationDisplayName;
}

@property (nonatomic) unsigned long long purchaseHistoryID;
@property (nonatomic) unsigned long long storeID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSDate *datePurchased;
@property (copy, nonatomic) NSURL *artworkURL;
@property (copy, nonatomic) NSString *redownloadParameters;
@property (nonatomic, getter=isVPPLicensed) _Bool vppLicensed;
@property (copy, nonatomic) NSString *vppOrganizationID;
@property (copy, nonatomic) NSString *vppOrganizationDisplayName;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
