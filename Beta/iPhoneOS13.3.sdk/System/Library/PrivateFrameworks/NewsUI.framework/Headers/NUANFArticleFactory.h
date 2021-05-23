/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCArticleController, NSString;

@interface NUANFArticleFactory : NSObject

{
    long long _qualityOfService;
    long long _relativePriority;
    FCArticleController *_articleController;
}

@property (nonatomic, readonly) FCArticleController *articleController;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) long long relativePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createArticlesForArticleIDs:(id)arg1;
- (id)initWithArticleController:(id)arg1;

@end
