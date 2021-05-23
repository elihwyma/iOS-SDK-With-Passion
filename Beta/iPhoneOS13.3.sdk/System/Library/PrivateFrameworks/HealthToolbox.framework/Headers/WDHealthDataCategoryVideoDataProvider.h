/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class HKDisplayCategory, NSString;

__attribute__((visibility("hidden")))
@interface WDHealthDataCategoryVideoDataProvider : NSObject

{
    HKDisplayCategory *_category;
    NSString *_importanceText;
    NSString *_descriptionText;
    NSString *_videoPosterImageName;
}

+ (id)descriptionTextForCategory:(id)arg1;
+ (id)videoPosterImageNameForCategory:(id)arg1;
+ (id)videoPosterImageNameWithName:(id)arg1;
+ (id)videoPosterImageNameForOnboarding;
+ (id)videoURLManagerIdentifierForOnboarding;

- (id)initWithCategory:(id)arg1;
- (id)descriptionText;
- (id)videoPosterImageName;
- (id)videoURLManagerIdentifier;

@end
