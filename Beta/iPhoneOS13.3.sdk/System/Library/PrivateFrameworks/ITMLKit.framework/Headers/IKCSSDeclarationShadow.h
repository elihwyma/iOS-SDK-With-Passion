/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCSSDeclaration.h>

@class NSShadow;

@interface IKCSSDeclarationShadow : IKCSSDeclaration

{
    NSShadow *_value;
}

@property (retain, nonatomic) NSShadow *value;

- (id)description;
- (id)stringValue;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;

@end
