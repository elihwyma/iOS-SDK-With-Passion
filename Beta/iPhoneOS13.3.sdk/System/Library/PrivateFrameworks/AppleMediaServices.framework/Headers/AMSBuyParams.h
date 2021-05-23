/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface AMSBuyParams : NSObject

{
    NSMutableDictionary *_backingDictionary;
}

@property (readonly) NSDictionary *dictionary;

+ (id)buyParamsWithString:(id)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)stringValue;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)initWithString:(id)arg1;
- (void)_parseBuyParams:(id)arg1;
- (void)importURLEncodedBuyParams:(id)arg1;

@end
