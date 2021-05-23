/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@protocol OS_dispatch_semaphore;

@interface WLVideosMigrator : NSObject

{
    NSObject<OS_dispatch_semaphore> *_importSema;
    _Bool _didSaveVideo;
    NSError *_saveError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contentType;

- (id)init;
- (id)contentType;
- (id)dataType;
- (_Bool)accountBased;
- (void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)storeRecordDataInDatabase;

@end
