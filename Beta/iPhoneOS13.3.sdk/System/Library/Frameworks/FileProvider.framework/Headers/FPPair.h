/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface FPPair : NSObject

{
    id _first;
    id _second;
}

@property (retain, nonatomic) id first;
@property (retain, nonatomic) id second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToPair:(id)arg1;

@end
