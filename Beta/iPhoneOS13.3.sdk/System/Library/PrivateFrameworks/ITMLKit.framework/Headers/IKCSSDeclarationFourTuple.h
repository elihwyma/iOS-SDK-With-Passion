/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCSSDeclaration.h>

@class IKFourTuple;

@interface IKCSSDeclarationFourTuple : IKCSSDeclaration

{
    IKFourTuple *_fourTuple;
}

@property (retain, nonatomic) IKFourTuple *fourTuple;

- (id)description;
- (id)stringValue;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;

@end
