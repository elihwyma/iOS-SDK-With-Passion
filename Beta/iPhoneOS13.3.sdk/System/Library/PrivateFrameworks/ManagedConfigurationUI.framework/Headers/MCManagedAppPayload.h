/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MCManagedAppPayload : MCPayload

{
    NSString *_managedAppID;
}

@property (retain, nonatomic) NSString *managedAppID;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)title;
- (id)initWithManagedAppID:(id)arg1 profile:(id)arg2;

@end
