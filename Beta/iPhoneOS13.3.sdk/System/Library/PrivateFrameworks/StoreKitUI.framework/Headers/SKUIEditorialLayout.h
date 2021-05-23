/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class SKUIEditorialComponent, SKUILayoutCache;

__attribute__((visibility("hidden")))
@interface SKUIEditorialLayout : NSObject

{
    SKUIEditorialComponent *_editorial;
    long long _landscapeLinkLayoutIndex;
    long long _landscapeTextLayoutIndex;
    long long _landscapeTitleLayoutIndex;
    double _landscapeWidth;
    long long _portraitLinkLayoutIndex;
    long long _portraitTextLayoutIndex;
    long long _portraitTitleLayoutIndex;
    double _portraitWidth;
    SKUILayoutCache *_textLayoutCache;
}

@property (nonatomic, readonly) SKUIEditorialComponent *editorialComponent;
@property (nonatomic, readonly) SKUILayoutCache *layoutCache;

- (void)enqueueLayoutRequests;
- (id)initWithEditorial:(id)arg1 layoutCache:(id)arg2;
- (void)setLayoutWidth:(double)arg1 forOrientation:(long long)arg2;
- (id)bodyTextLayoutForOrientation:(long long)arg1;
- (double)layoutHeightForOrientation:(long long)arg1 expanded:(_Bool)arg2;
- (id)titleTextLayoutForOrientation:(long long)arg1;
- (id)linkLayoutForOrientation:(long long)arg1;
- (id)_bodyTextLayoutRequestWithTotalWidth:(double)arg1;
- (id)_titleTextLayoutRequestWithTotalWidth:(double)arg1;
- (id)_linkLayoutRequestWithTotalWidth:(double)arg1;

@end
