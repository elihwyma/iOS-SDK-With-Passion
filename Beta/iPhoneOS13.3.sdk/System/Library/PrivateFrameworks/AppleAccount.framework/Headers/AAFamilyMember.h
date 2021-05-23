/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface AAFamilyMember : NSObject

{
    _Bool _isMe;
    _Bool _isChild;
    _Bool _isSharingPurchases;
    _Bool _isOrganizer;
    _Bool _areParentalControlsEnabled;
    _Bool _isAskToBuyEnabled;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_appleID;
    NSNumber *_personID;
    NSString *_personIDHash;
    NSString *_altDSID;
    NSString *_title;
    NSDate *_joinDate;
    NSString *_iTunesNotLinkedMessage;
    NSString *_linkediTunesAppleID;
    NSNumber *_linkediTunesDSID;
}

@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSNumber *personID;
@property (copy, nonatomic) NSString *personIDHash;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *joinDate;
@property (nonatomic) _Bool isMe;
@property (nonatomic) _Bool isChild;
@property (nonatomic) _Bool isSharingPurchases;
@property (nonatomic) _Bool isOrganizer;
@property (copy, nonatomic) NSString *iTunesNotLinkedMessage;
@property (copy, nonatomic) NSString *linkediTunesAppleID;
@property (copy, nonatomic) NSNumber *linkediTunesDSID;
@property (nonatomic) _Bool areParentalControlsEnabled;
@property (nonatomic) _Bool isAskToBuyEnabled;

@end
