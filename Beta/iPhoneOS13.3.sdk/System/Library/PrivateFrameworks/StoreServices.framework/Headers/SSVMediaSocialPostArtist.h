/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSVMediaSocialPostArtist : NSObject

{
    NSString *_identifier;
    NSString *_name;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
