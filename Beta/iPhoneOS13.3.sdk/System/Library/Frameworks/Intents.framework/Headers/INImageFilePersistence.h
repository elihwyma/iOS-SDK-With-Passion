/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class INImageBundle, NSArray, NSString;

@interface INImageFilePersistence : NSObject

{
    INImageBundle *_imageBundle;
    NSArray *__supportedClasses;
}

@property (copy, nonatomic, setter=_setSupportedClasses:) NSArray *_supportedClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) unsigned long long servicePriority;

- (id)init;
- (_Bool)canStoreImage:(id)arg1;
- (void)storeImage:(id)arg1 scaled:(_Bool)arg2 qualityOfService:(unsigned int)arg3 storeType:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)retrieveImageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)purgeImageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)purgeExpiredImagesInEphemeralStore;
- (id)_filePathForImageWithFileName:(id)arg1;
- (id)_deleteItemAtFilePath:(id)arg1;

@end
