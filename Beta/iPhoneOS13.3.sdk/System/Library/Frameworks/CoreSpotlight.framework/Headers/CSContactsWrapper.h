/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CSContactsWrapper : NSObject

@property (nonatomic, readonly) Class CNContactPropertyClass;
@property (nonatomic, readonly) NSString *CNContactEmailAddressKeyString;

+ (id)sharedInstance;

@end
