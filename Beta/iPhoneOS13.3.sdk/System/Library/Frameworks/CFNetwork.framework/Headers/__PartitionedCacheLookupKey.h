/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSString;

@interface __PartitionedCacheLookupKey : NSObject <Swift>

{
    NSString *_mainDocOrigin;
    NSString *_domain;
}

@property (retain, nonatomic) NSString *mainDocOrigin;
@property (retain, nonatomic) NSString *domain;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPartition:(id)arg1 domain:(id)arg2;

@end
