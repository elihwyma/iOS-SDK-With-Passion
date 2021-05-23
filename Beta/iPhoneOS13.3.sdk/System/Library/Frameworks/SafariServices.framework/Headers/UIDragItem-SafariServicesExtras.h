/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIDragItem.h>

@class NSURL, WebBookmark, _SFTabStateData;

@interface UIDragItem (SafariServicesExtras)

@property (nonatomic, readonly) WebBookmark *_sf_localBookmark;
@property (nonatomic, readonly) NSURL *_sf_localURL;
@property (nonatomic, readonly) _SFTabStateData *_sf_tabStateData;

+ (void)_sf_loadObjectsFromDragItems:(id)arg1 usingLocalObjectLoader:(CDUnknownFunctionPointerType)arg2 objectLoader:(CDUnknownFunctionPointerType)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)_sf_itemWithTabStateData:(id)arg1 userActivity:(id)arg2;

- (id)_sf_initWithBookmark:(id)arg1;
- (id)_sf_initWithSiriSuggestion:(id)arg1;

@end
