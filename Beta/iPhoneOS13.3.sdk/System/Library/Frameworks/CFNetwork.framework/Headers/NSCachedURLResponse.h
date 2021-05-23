/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSCachedURLResponseInternal, NSData, NSDictionary, NSURLResponse;

@interface NSCachedURLResponse : NSObject <Swift>

{
    NSCachedURLResponseInternal *_internal;
}

@property (copy, readonly) NSURLResponse *response;
@property (copy, readonly) NSData *data;
@property (copy, readonly) NSDictionary *userInfo;
@property (readonly) unsigned long long storagePolicy;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (const struct _CFCachedURLResponse *)_CFCachedURLResponse;
- (id)_initWithCFCachedURLResponse:(struct _CFCachedURLResponse *)arg1;
- (id)initWithResponse:(id)arg1 data:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4;
- (id)initWithResponse:(id)arg1 data:(id)arg2;
- (id)initWithResponse:(id)arg1 dataArray:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4;
- (id)dataArray;
- (void)_deallocInternalCFCachedURLResponse;
- (void)_reestablishInternalCFCachedURLResponse:(struct _CFCachedURLResponse *)arg1;

@end
