/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INUserContext.h>

@class NSNumber;

@interface INMediaUserContext : INUserContext

{
    long long _subscriptionStatus;
    NSNumber *_numberOfLibraryItems;
}

@property (nonatomic) long long subscriptionStatus;
@property (copy, nonatomic) NSNumber *numberOfLibraryItems;

+ (long long)_type;
+ (_Bool)supportsSecureCoding;
+ (id)_sharedFormatter;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)safeLibraryItems;

@end
