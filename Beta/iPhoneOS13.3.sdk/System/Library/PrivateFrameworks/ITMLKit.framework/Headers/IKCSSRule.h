/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKCSSDeclarationList, IKCSSMediaQuery, IKCSSSelectorList;

@interface IKCSSRule : NSObject

{
    IKCSSSelectorList *_selectorList;
    IKCSSDeclarationList *_declarationList;
}

@property (retain, nonatomic) IKCSSSelectorList *selectorList;
@property (retain, nonatomic) IKCSSDeclarationList *declarationList;
@property (nonatomic, readonly) IKCSSMediaQuery *mediaQuery;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
