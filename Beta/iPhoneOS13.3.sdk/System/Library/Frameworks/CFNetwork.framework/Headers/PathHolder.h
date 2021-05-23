/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@protocol OS_nw_path;

@interface PathHolder : NSObject <Swift>

{
    NSObject<OS_nw_path> *_path;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPath:(id)arg1;

@end
