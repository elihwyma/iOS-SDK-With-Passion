/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSVMediaContentTasteItem : NSObject

{
    unsigned long long _contentType;
    NSString *_playlistGlobalID;
    long long _storeAdamID;
    unsigned long long _tasteType;
}

@property (nonatomic, readonly) unsigned long long contentType;
@property (copy, nonatomic, readonly) NSString *playlistGlobalID;
@property (nonatomic, readonly) long long storeAdamID;
@property (nonatomic, readonly) unsigned long long tasteType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)_copyWithMediaContentTasteItemClass:(Class)arg1;

@end
