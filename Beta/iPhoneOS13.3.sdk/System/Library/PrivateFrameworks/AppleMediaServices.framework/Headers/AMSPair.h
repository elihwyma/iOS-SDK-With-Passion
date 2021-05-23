/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@interface AMSPair : NSObject

{
    id _first;
    id _second;
}

@property (nonatomic, readonly) id first;
@property (nonatomic, readonly) id second;

- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end
