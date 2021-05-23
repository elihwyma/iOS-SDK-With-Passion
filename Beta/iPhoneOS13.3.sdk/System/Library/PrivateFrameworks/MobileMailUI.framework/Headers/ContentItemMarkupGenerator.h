/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ContentItemMarkupGenerator : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (_Bool)isDisplayableInlineContentItem:(id)arg1;
+ (id)attachmentElementMarkupStringForContentItem:(id)arg1;
+ (_Bool)isDisplayableImageContentItem:(id)arg1;
+ (_Bool)isDisplayableSinglePagePDFContentItem:(id)arg1;
+ (id)markupStringForDisplayForContentItem:(id)arg1;

@end
