/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, NSString;

@interface SUScriptActivityViewController : SUScriptViewController

{
    NSArray *_applicationActivities;
    NSArray *_providers;
}

@property (copy) id excludedActivityTypes;
@property (readonly) NSString *activityTypeAddToReadingList;
@property (readonly) NSString *activityTypeAssignToContact;
@property (readonly) NSString *activityTypeCopyToPasteboard;
@property (readonly) NSString *activityTypeMail;
@property (readonly) NSString *activityTypeMessage;
@property (readonly) NSString *activityTypePostToFacebook;
@property (readonly) NSString *activityTypePostToFlickr;
@property (readonly) NSString *activityTypePostToTwitter;
@property (readonly) NSString *activityTypePostToVimeo;
@property (readonly) NSString *activityTypePostToWeibo;
@property (readonly) NSString *activityTypePrint;
@property (readonly) NSString *activityTypeSaveToCameraRoll;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)newNativeViewController;
- (void)setTitle:(id)arg1 forActivityType:(id)arg2;
- (id)initWithScriptItemProviders:(id)arg1 applicationActivities:(id)arg2;

@end
