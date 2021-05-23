/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSURL.h>

@class NSArray, NSDictionary, NSString;

@interface NSURL (ChatKitAdditions)

@property (nonatomic, readonly) _Bool ckShouldShowComposeUI;
@property (nonatomic, readonly) _Bool ckShouldShowDigitalTouchCanvas;
@property (nonatomic, readonly) _Bool ckAllowRetargeting;
@property (nonatomic, readonly) _Bool ckIsLaunchAppURL;
@property (nonatomic, readonly) _Bool ckIsUnitTestingURL;
@property (nonatomic, readonly) NSString *ckLaunchURLBalloonPluginBundleID;
@property (nonatomic, readonly) NSString *ckLaunchURLPresentContentForMessageGUID;
@property (nonatomic, readonly) NSDictionary *ckLaunchURLBalloonPluginPayload;
@property (nonatomic, readonly) NSString *ckLaunchURLPostComposeDismissal;
@property (nonatomic, readonly) NSArray *ckSuggestedReplies;

+ (id)ckURLForResource:(id)arg1 withExtension:(id)arg2;
+ (id)ckURLForChatIdentifier:(id)arg1 entryBody:(id)arg2;

- (_Bool)ckIsSMSPrivateURLScheme;
- (id)ckWillNotLaunchComposeUIURL;

@end
