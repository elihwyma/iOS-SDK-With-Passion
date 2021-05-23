/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSData, NSError, NSString;

@interface SSPlayInfoResponse : NSObject

{
    NSError *_error;
    NSData *_playInfoData;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSData *playInfoData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithPlayInfoData:(id)arg1 error:(id)arg2;

@end
