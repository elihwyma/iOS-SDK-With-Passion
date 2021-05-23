/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface UIContentSizeCategoryPreference : NSObject

{
    NSString *_preferredContentSizeCategory;
    NSString *_preferredContentSizeCategoryCarPlay;
}

@property (retain, nonatomic) NSString *preferredContentSizeCategory;
@property (retain, nonatomic) NSString *preferredContentSizeCategoryCarPlay;

+ (id)system;
+ (void)overrideSystemWithPreference:(id)arg1;
+ (void)overrideSystemWithPreference:(id)arg1 forBlock:(CDUnknownBlockType)arg2;
+ (void)_populateUserDefaultsContentSizeCategory:(id *)arg1 carPlay:(id *)arg2;
+ (void)resetSystemPreferenceOverride;
+ (void)_resetSystemPreferenceOverride;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1 forBlock:(CDUnknownBlockType)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)checkForChanges;
- (id)initWithContentSizeCategory:(id)arg1;
- (id)initWithContentSizeCategory:(id)arg1 carPlay:(id)arg2;
- (id)initWithRawUserDefaults;

@end
