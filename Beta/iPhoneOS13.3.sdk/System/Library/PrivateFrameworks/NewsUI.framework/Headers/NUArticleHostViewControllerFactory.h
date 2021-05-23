/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NUArticleContentSizeManager, NUArticleViewControllerFactory, NUErrorMessageFactory, NUSettings;

@interface NUArticleHostViewControllerFactory : NSObject

{
    id <NUArticleViewControllerFactory> _articleViewControllerFactory;
    id <NUSettings> _settings;
    id <NUErrorMessageFactory> _errorMessageFactory;
    id <NUArticleContentSizeManager> _contentSizeManager;
}

@property (nonatomic, readonly) id <NUArticleViewControllerFactory> articleViewControllerFactory;
@property (copy, nonatomic, readonly) id <NUSettings> settings;
@property (nonatomic, readonly) id <NUErrorMessageFactory> errorMessageFactory;
@property (nonatomic, readonly) id <NUArticleContentSizeManager> contentSizeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createArticleHostViewControllerForArticle:(id)arg1;
- (id)initWithArticleViewControllerFactory:(id)arg1 settings:(id)arg2 errorMessageFactory:(id)arg3 contentSizeManager:(id)arg4;

@end
