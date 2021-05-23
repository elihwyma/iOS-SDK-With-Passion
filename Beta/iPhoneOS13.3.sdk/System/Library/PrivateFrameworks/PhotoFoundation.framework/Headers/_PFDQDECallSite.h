/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData;

@interface _PFDQDECallSite : NSObject

{
    NSData *_addresses;
    NSArray *_symbols;
}

+ (void)initialize;
+ (id)currentCallSite;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAddresses:(id)arg1;
- (id)backtraceWithPrefix:(id)arg1;

@end
