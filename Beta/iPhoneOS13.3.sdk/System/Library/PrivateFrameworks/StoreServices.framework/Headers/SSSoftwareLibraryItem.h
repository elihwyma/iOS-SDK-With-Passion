/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@interface SSSoftwareLibraryItem : NSObject

{
    _Bool _beta;
    NSMutableDictionary *_etags;
    _Bool _placeholder;
    _Bool _profileValidated;
    NSMutableDictionary *_propertyValues;
    _Bool _launchProhibited;
}

@property (nonatomic, getter=isBeta) _Bool beta;
@property (nonatomic, getter=isLaunchProhibited) _Bool launchProhibited;
@property (nonatomic, getter=isPlaceholder) _Bool placeholder;
@property (nonatomic, getter=isProfileValidated) _Bool profileValidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)valueForProperty:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)ETagForAssetType:(id)arg1;
- (_Bool)setETag:(id)arg1 forAssetType:(id)arg2 error:(id *)arg3;
- (id)_initWithITunesMetadata:(id)arg1;

@end
