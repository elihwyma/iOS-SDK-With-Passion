/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IKCSSMediaQueryExpression : NSObject

{
    long long _type;
    NSString *_key;
    NSString *_stringValue;
    NSString *_dimension;
    NSString *_mediaType;
    double _doubleValue;
}

@property long long type;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSString *dimension;
@property (retain, nonatomic) NSString *mediaType;
@property double doubleValue;

- (id)description;
- (_Bool)evaluate;
- (id)valueAsString;
- (id)expressionAsString;

@end
