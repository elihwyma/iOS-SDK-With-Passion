/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CNSharingProfileOnboardingFlowResult : NSObject

{
    _Bool _didPersistImageToContact;
    NSString *_givenName;
    NSString *_familyName;
    NSData *_imageData;
    NSString *_type;
    unsigned long long _sharingAudience;
    struct CGRect _cropRect;
}

@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) struct CGRect cropRect;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned long long sharingAudience;
@property (nonatomic) _Bool didPersistImageToContact;

- (id)description;

@end
