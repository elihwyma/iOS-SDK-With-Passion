//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;
@protocol FCHeadlineProviding;

@protocol NUArticleContentSizeManager <NSObject>
- (void)updateContentScale:(long long)arg1 forArticle:(id <FCHeadlineProviding>)arg2;
- (long long)contentScaleForArticle:(id <FCHeadlineProviding>)arg1;
- (void)updateContentSizeCategory:(NSString *)arg1 forArticle:(id <FCHeadlineProviding>)arg2;
- (NSString *)contentSizeCategoryForArticle:(id <FCHeadlineProviding>)arg1;
@end

