/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

#import <ProactiveSupport/Swift-Protocol.h>

@class NSString;

@interface _PASTempfileDescr : NSObject <Swift>

{
    int _fd;
    NSString *_path;
}

@property (nonatomic, readonly) int fd;
@property (nonatomic, readonly) NSString *path;

+ (id)tempfileDescrWithFd:(int)arg1 path:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFd:(int)arg1 path:(id)arg2;
- (_Bool)isEqualToTempfileDescr:(id)arg1;

@end
