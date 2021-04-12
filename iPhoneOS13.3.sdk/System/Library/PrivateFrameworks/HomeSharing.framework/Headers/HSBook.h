//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSString, NSURL;

@interface HSBook : NSObject <NSSecureCoding>
{
    BOOL _vppLicensed;
    NSUInteger _purchaseHistoryID;
    NSUInteger _storeID;
    NSString *_title;
    NSString *_author;
    NSString *_genre;
    NSDate *_datePurchased;
    NSURL *_artworkURL;
    NSString *_redownloadParameters;
    NSString *_vppOrganizationID;
    NSString *_vppOrganizationDisplayName;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *vppOrganizationDisplayName; // @synthesize vppOrganizationDisplayName=_vppOrganizationDisplayName;
@property(copy, nonatomic) NSString *vppOrganizationID; // @synthesize vppOrganizationID=_vppOrganizationID;
@property(nonatomic, getter=isVPPLicensed) BOOL vppLicensed; // @synthesize vppLicensed=_vppLicensed;
@property(copy, nonatomic) NSString *redownloadParameters; // @synthesize redownloadParameters=_redownloadParameters;
@property(copy, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(copy, nonatomic) NSDate *datePurchased; // @synthesize datePurchased=_datePurchased;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) NSUInteger storeID; // @synthesize storeID=_storeID;
@property(nonatomic) NSUInteger purchaseHistoryID; // @synthesize purchaseHistoryID=_purchaseHistoryID;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

