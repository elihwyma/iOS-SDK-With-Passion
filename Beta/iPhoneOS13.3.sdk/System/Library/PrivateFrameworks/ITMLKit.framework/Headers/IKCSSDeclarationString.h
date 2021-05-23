/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCSSDeclaration.h>

@class NSString;

@interface IKCSSDeclarationString : IKCSSDeclaration

{
    NSString *_value;
}

@property (retain, nonatomic) NSString *value;

- (id)description;
- (id)stringValue;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;

@end
