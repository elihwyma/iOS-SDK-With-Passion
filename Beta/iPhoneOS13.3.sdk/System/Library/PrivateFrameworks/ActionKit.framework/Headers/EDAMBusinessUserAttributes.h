/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMBusinessUserAttributes : FATObject

{
    NSString *_title;
    NSString *_location;
    NSString *_department;
    NSString *_mobilePhone;
    NSString *_linkedInProfileUrl;
    NSString *_workPhone;
    NSNumber *_companyStartDate;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *department;
@property (retain, nonatomic) NSString *mobilePhone;
@property (retain, nonatomic) NSString *linkedInProfileUrl;
@property (retain, nonatomic) NSString *workPhone;
@property (retain, nonatomic) NSNumber *companyStartDate;

+ (id)structName;
+ (id)structFields;

@end
