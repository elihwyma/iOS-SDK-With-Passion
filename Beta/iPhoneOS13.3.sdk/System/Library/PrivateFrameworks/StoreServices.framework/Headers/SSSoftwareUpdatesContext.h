/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface SSSoftwareUpdatesContext : NSObject

{
    NSString *_clientIdentifierHeader;
    _Bool _forced;
    NSArray *_softwareTypes;
}

@property (copy, nonatomic, readonly) NSString *clientIdentifierHeader;
@property (nonatomic, readonly, getter=isForced) _Bool forced;
@property (copy, nonatomic, readonly) NSArray *softwareTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
