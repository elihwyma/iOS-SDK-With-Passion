/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebUI/WBSTouchIconRequest.h>

@class WebBookmark;

__attribute__((visibility("hidden")))
@interface SFBookmarkTouchIconRequest : WBSTouchIconRequest

{
    WebBookmark *_bookmark;
}

@property (nonatomic, readonly) WebBookmark *bookmark;

+ (id)requestWithBookmark:(id)arg1 iconGenerationEnabled:(_Bool)arg2;
+ (id)requestWithBookmark:(id)arg1;

- (id)uniqueIdentifier;
- (id)initWithBookmark:(id)arg1 iconGenerationEnabled:(_Bool)arg2;
- (id)initWithBookmark:(id)arg1;

@end
