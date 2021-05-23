/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIApplicationExtensionActivity.h>

@class NSArray, NSString, UIImage;

@interface UIShortcutActivity : UIApplicationExtensionActivity

{
    NSString *_identifier;
    UIImage *_iconImage;
    NSString *_singleUseToken;
    NSString *_name;
    NSArray *_photosAssetIdentifiers;
}

@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *singleUseToken;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *photosAssetIdentifiers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)activityType;
- (id)activityTitle;
- (long long)_defaultSortGroup;
- (void)prepareWithActivityExtensionItemData:(id)arg1;
- (id)_actionImage;
- (id)initWithApplicationExtension:(id)arg1 singleUseToken:(id)arg2 photosAssetIdentifiers:(id)arg3;
- (id)initWithPartial:(id)arg1;
- (id)initPartialShortcutFromXPCHelperWithName:(id)arg1 identifier:(id)arg2 image:(id)arg3;

@end
