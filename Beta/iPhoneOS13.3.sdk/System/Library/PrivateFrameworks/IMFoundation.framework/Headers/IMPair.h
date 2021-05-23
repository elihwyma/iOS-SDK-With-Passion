/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@interface IMPair : NSObject

{
    id _first;
    id _second;
}

@property (retain) id first;
@property (retain) id second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end
