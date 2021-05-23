/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface TUVideoEffect : NSObject

{
    NSString *_name;
    UIImage *_thumbnailImage;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) UIImage *thumbnailImage;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 thumbnailImage:(id)arg2;
- (_Bool)isEqualToEffect:(id)arg1;

@end
