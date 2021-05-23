/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCTagSettings, NSString;

@interface NUArticleContentSizeManager : NSObject

{
    FCTagSettings *_tagSettings;
}

@property (nonatomic, readonly) FCTagSettings *tagSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)contentSizeCategoryForArticle:(id)arg1;
- (void)updateContentSizeCategory:(id)arg1 forArticle:(id)arg2;
- (long long)contentScaleForArticle:(id)arg1;
- (void)updateContentScale:(long long)arg1 forArticle:(id)arg2;
- (id)initWithTagSettings:(id)arg1;
- (id)contentSizeCategoryForSize:(long long)arg1;
- (long long)textSizeForContentSizeCategory:(id)arg1;

@end
