/*
 Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SOSContact : NSObject

{
    NSString *_name;
    NSString *_phoneNumber;
    NSString *_nameContactIdentifier;
    NSString *_phoneNumberContactIdentifier;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *nameContactIdentifier;
@property (copy, nonatomic) NSString *phoneNumberContactIdentifier;

@end
