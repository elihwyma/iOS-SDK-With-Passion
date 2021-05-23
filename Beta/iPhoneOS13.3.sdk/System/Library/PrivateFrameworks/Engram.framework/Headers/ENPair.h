/*
 Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

#import <NSObject.h>

@interface ENPair : NSObject

{
    id _first;
    id _second;
}

@property (retain, nonatomic) id first;
@property (retain, nonatomic) id second;

- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end
