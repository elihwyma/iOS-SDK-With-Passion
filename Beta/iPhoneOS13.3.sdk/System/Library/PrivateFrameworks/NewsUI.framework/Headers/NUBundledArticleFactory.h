/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCArticleController, NSString;

@interface NUBundledArticleFactory : NSObject

{
    FCArticleController *_articleController;
}

@property (nonatomic, readonly) FCArticleController *articleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createArticlesForArticleIDs:(id)arg1;
- (id)initWithArticleController:(id)arg1;

@end
