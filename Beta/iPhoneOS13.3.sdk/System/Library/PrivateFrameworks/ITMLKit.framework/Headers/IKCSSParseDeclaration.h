/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCSSParseObject.h>

@class NSString;

@interface IKCSSParseDeclaration : IKCSSParseObject

{
    _Bool _important;
    NSString *_name;
    struct _NSRange _nameRange;
    struct _NSRange _valueRange;
}

@property (nonatomic) struct _NSRange nameRange;
@property (nonatomic) struct _NSRange valueRange;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) _Bool important;

- (id)init;
- (id)description;

@end
