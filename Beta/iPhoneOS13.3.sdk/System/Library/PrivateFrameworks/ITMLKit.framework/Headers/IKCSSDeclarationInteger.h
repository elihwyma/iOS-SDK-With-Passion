/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCSSDeclaration.h>

@interface IKCSSDeclarationInteger : IKCSSDeclaration

{
    long long _value;
}

@property long long value;

- (id)description;
- (id)stringValue;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;

@end
