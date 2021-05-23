/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCSSDeclaration.h>

@interface IKCSSDeclarationEdgeInsets : IKCSSDeclaration

{
    _Bool _insetsFound;
    unsigned long long _edgeFlag;
    struct UIEdgeInsets _insets;
}

@property struct UIEdgeInsets insets;
@property unsigned long long edgeFlag;
@property _Bool insetsFound;

- (id)description;
- (id)stringValue;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;

@end
