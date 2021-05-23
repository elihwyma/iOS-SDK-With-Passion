/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCSSDeclaration.h>

@interface IKCSSDeclarationTransform : IKCSSDeclaration

{
    struct CGAffineTransform _transform;
}

@property struct CGAffineTransform transform;

- (id)stringValue;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;

@end
