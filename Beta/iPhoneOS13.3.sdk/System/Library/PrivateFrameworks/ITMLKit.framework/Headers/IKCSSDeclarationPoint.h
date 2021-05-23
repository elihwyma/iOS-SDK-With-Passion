/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCSSDeclaration.h>

@interface IKCSSDeclarationPoint : IKCSSDeclaration

{
    double _value;
    unsigned long long _unit;
}

@property (nonatomic) double value;
@property (nonatomic) unsigned long long unit;

- (id)description;
- (id)stringValue;
- (id)number;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;

@end
