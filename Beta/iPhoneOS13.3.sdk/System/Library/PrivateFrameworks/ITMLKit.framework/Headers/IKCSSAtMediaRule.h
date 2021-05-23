/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCSSRule.h>

@class IKCSSMediaQuery;

@interface IKCSSAtMediaRule : IKCSSRule

{
    IKCSSMediaQuery *_mediaQuery;
    struct _NSRange _queryRange;
}

@property (nonatomic) struct _NSRange queryRange;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mediaQuery;
- (id)initWithMediaQuery:(id)arg1;

@end
