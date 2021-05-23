/*
 Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString;

@interface DAContactSearchResultElement : NSObject

{
    NSString *_displayName;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_emailAddress;
    NSString *_workPhone;
    NSString *_mobilePhone;
    NSString *_company;
    NSString *_title;
    NSString *_homePhone;
    NSString *_alias;
    NSString *_office;
    NSString *_serverSource;
    NSString *_recordName;
    NSString *_faxPhone;
    NSString *_department;
    NSString *_street;
    NSString *_city;
    NSString *_state;
    NSString *_zip;
    NSString *_country;
    NSData *_jpegPhoto;
    NSString *_imService;
    NSString *_imUsername;
    NSString *_uri;
    NSString *_buildingName;
    NSString *_appleFloor;
    NSString *_pagerNumber;
    NSString *_postalAddress;
    NSString *_homePostalAddress;
    NSString *_principalPath;
    NSString *_preferredUserAddress;
    NSArray *_cuAddresses;
    NSString *_iPhone;
    NSString *_mainPhone;
    NSString *_workFaxPhone;
    NSString *_identifierOnServer;
}

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *workPhone;
@property (copy, nonatomic) NSString *mobilePhone;
@property (copy, nonatomic) NSString *company;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *homePhone;
@property (copy, nonatomic) NSString *alias;
@property (copy, nonatomic) NSString *office;
@property (copy, nonatomic) NSString *serverSource;
@property (copy, nonatomic) NSString *recordName;
@property (copy, nonatomic) NSString *faxPhone;
@property (copy, nonatomic) NSString *department;
@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *zip;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSData *jpegPhoto;
@property (copy, nonatomic) NSString *imService;
@property (copy, nonatomic) NSString *imUsername;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *buildingName;
@property (copy, nonatomic) NSString *appleFloor;
@property (copy, nonatomic) NSString *pagerNumber;
@property (copy, nonatomic) NSString *postalAddress;
@property (copy, nonatomic) NSString *homePostalAddress;
@property (copy, nonatomic) NSString *principalPath;
@property (copy, nonatomic) NSString *preferredUserAddress;
@property (copy, nonatomic) NSArray *cuAddresses;
@property (copy, nonatomic) NSString *iPhone;
@property (copy, nonatomic) NSString *mainPhone;
@property (copy, nonatomic) NSString *workFaxPhone;
@property (retain, nonatomic) NSString *identifierOnServer;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToDAContactSearchResultElement:(id)arg1;

@end
