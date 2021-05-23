/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKArray;

@interface IKCSSParseObject : NSObject

{
    IKArray *_cssValue;
    long long _type;
    struct _NSRange _range;
}

@property (retain, nonatomic) IKArray *cssValue;
@property (nonatomic) long long type;
@property (nonatomic) struct _NSRange range;

+ (id)stringifyList:(id)arg1;

- (id)init;
- (id)description;

@end
