/*
 Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface APSPair : NSObject

{
    id _first;
    id _second;
}

@property (retain, nonatomic) id first;
@property (retain, nonatomic) id second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end
