/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@interface FMPair : NSObject

{
    id _first;
    id _second;
}

@property (readonly) id first;
@property (readonly) id second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end
