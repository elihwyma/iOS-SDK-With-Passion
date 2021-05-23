/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface IKStyleMediaQuery : NSObject

{
    NSString *_identifier;
    _Bool _isNegated;
    NSString *_mediaType;
    NSDictionary *_featureValues;
}

@property (nonatomic, readonly) _Bool isNegated;
@property (retain, nonatomic, readonly) NSString *mediaType;
@property (retain, nonatomic, readonly) NSDictionary *featureValues;
@property (nonatomic, readonly) NSString *identifier;

+ (id)mediaQueryListWithCSSMediaQuery:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaType:(id)arg1 featureValues:(id)arg2 isNegated:(_Bool)arg3;

@end
