/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _SFOpenInOtherAppActivityItemsSource : NSObject

{
    NSURL *_fileURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFilePath:(id)arg1;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;

@end
