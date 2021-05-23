/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

#import <Social/Swift-Protocol.h>

@class NSString, UIImage;

@interface SLMicroBlogUserRecord : NSObject <Swift>

{
    NSString *_name;
    NSString *_screen_name;
    NSString *_profile_image_url;
    UIImage *_profileImageCache;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *screen_name;
@property (retain, nonatomic) NSString *profile_image_url;
@property (retain) UIImage *profileImageCache;

+ (_Bool)supportsSecureCoding;
+ (id)userRecordWithDictionaryRepresentation:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValuesWithUserDictionary:(id)arg1;

@end
