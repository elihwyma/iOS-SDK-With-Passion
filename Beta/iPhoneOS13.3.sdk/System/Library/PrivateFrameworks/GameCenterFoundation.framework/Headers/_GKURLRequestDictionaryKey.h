/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSURLRequest;

@interface _GKURLRequestDictionaryKey : NSObject

{
    NSURLRequest *_request;
}

@property (retain, nonatomic) NSURLRequest *request;

+ (id)keyWithRequest:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1;

@end
