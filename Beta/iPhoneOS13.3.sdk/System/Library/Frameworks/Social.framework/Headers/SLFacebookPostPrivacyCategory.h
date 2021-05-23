/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SLFacebookPostPrivacyCategory : NSObject

{
    NSString *_name;
    NSArray *_audiencePrivacySettings;
}

@property (retain) NSString *name;
@property (retain) NSArray *audiencePrivacySettings;

@end
