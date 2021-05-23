/*
 Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface TPCachedViableBottles : NSObject

{
    NSArray *_viableBottles;
    NSArray *_partialBottles;
}

@property (retain, readonly) NSArray *viableBottles;
@property (retain, readonly) NSArray *partialBottles;

- (id)initWithViableBottles:(id)arg1 partialBottles:(id)arg2;

@end
