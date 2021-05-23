/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISReviewProvider

{
    _Bool _backgroundReview;
}

@property (getter=isBackgroundReview) _Bool backgroundReview;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)parseData:(id)arg1 returningError:(id *)arg2;

@end
