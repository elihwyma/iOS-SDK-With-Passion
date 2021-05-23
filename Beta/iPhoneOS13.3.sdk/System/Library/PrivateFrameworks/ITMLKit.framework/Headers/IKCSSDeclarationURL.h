/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCSSDeclaration.h>

@class NSURL;

@interface IKCSSDeclarationURL : IKCSSDeclaration

{
    NSURL *_value;
}

@property (retain, nonatomic) NSURL *value;

- (id)description;
- (id)stringValue;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;

@end
