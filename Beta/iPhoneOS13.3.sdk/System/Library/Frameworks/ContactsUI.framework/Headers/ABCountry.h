/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ABCountry : NSObject

{
    NSString *_countryCode;
    NSString *_countryName;
    NSString *_phoneticCountryName;
}

@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *countryName;
@property (copy, nonatomic) NSString *phoneticCountryName;

@end
