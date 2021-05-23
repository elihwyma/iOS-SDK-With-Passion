/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIITunesPassConfiguration : NSObject

{
    NSString *_dialogLearnMoreButton;
    NSString *_dialogMessage;
    NSString *_dialogNotNowButton;
    NSString *_dialogTitle;
    NSString *_learnMoreAddPassButtonTitle;
    NSString *_learnMoreDoneButtonTitle;
    NSString *_learnMoreExplanation;
    NSString *_learnMoreTitle;
    NSString *_learnMoreViewPassButtonTitle;
    NSString *_lockupDescription;
    NSString *_lockupLearnMoreLinkTitle;
    NSString *_lockupTitle;
}

@property (nonatomic, readonly) NSString *lockupDescription;
@property (nonatomic, readonly) NSString *lockupLearnMoreLinkTitle;
@property (nonatomic, readonly) NSString *lockupTitle;
@property (nonatomic, readonly) NSString *learnMoreAddPassButtonTitle;
@property (nonatomic, readonly) NSString *learnMoreDoneButtonTitle;
@property (nonatomic, readonly) NSString *learnMoreExplanation;
@property (nonatomic, readonly) NSString *learnMoreTitle;
@property (nonatomic, readonly) NSString *learnMoreViewPassButtonTitle;

- (id)initWithITunesPassDictionary:(id)arg1 clientContext:(id)arg2;
- (id)learnMoreAlertView;

@end
