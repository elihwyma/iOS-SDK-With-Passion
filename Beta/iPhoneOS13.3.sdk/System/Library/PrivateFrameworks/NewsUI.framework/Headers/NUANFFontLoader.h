/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCAsyncOnceOperation, FCFlintManifest, FCFlintResourceManager, NSMutableArray, NSString;

@protocol NUFontRegistration;

@interface NUANFFontLoader : NSObject

{
    long long _relativePriority;
    FCFlintManifest *_flintManifest;
    FCFlintResourceManager *_flintResourceManager;
    NSMutableArray *_fontResourcesToRegister;
    NSMutableArray *_fontResourcesRegistered;
    FCAsyncOnceOperation *_asyncOnceOperation;
    id <NUFontRegistration> _fontRegistration;
}

@property (nonatomic, readonly) FCFlintManifest *flintManifest;
@property (nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property (nonatomic, readonly) NSMutableArray *fontResourcesToRegister;
@property (nonatomic, readonly) NSMutableArray *fontResourcesRegistered;
@property (nonatomic, readonly) FCAsyncOnceOperation *asyncOnceOperation;
@property (nonatomic, readonly) id <NUFontRegistration> fontRegistration;
@property (nonatomic) long long relativePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)asyncLoadFontsOnceWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerFontsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFlintManifest:(id)arg1 flintResourceManager:(id)arg2 fontRegistration:(id)arg3;
- (void)unregisterFontsWithCompletion:(CDUnknownBlockType)arg1;
- (id)loadFontsWithCompletion:(CDUnknownBlockType)arg1;

@end
