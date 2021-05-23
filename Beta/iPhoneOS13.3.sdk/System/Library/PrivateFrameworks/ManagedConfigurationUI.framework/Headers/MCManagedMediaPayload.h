/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <ManagedConfiguration/MCPayload.h>

@class MCBook;

__attribute__((visibility("hidden")))
@interface MCManagedMediaPayload : MCPayload

{
    MCBook *_managedBook;
}

@property (retain, nonatomic) MCBook *managedBook;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)title;
- (id)initWithManagedMedia:(id)arg1 profile:(id)arg2;

@end
