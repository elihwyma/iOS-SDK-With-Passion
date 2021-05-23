/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCSSParseObject.h>

@class IKCSSToken;

@interface IKCSSParseToken : IKCSSParseObject

{
    IKCSSToken *_token;
}

@property (retain, nonatomic) IKCSSToken *token;

- (id)init;
- (id)description;

@end
