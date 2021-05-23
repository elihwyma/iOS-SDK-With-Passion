/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSString;

@protocol SASTTemplateAction;

@interface SASTApplicationBannerItem : AceObject

@property (retain, nonatomic) id <SASTTemplateAction> action;
@property (copy, nonatomic) NSString *bundleId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)applicationBannerItem;
+ (id)applicationBannerItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
