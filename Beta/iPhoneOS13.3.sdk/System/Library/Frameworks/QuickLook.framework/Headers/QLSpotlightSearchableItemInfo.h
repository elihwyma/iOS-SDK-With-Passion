/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLSpotlightSearchableItemInfo : NSObject

{
    NSString *_queryString;
    NSString *_searchableItemUniqueIdentifier;
    NSString *_applicationBundleIdentifier;
}

@property (copy, nonatomic) NSString *queryString;
@property (copy, nonatomic) NSString *searchableItemUniqueIdentifier;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)spotlightInfoWithUniqueIdentifier:(id)arg1 queryString:(id)arg2 applicationBundleIdentifier:(id)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
