/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKDataAccessor.h>

@class NSString, PKPassLibrary;

@interface PKRemoteDataAccessor : PKDataAccessor

{
    PKPassLibrary *_library;
    NSString *_objectUniqueID;
}

@property (nonatomic, readonly) PKPassLibrary *library;
@property (nonatomic, readonly) NSString *objectUniqueID;

- (id)content;
- (id)archiveData;
- (id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(_Bool)arg5;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)contentWithCompletion:(CDUnknownBlockType)arg1;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(_Bool)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)dataForBundleResource:(id)arg1;
- (id)dataForBundleResources:(id)arg1;
- (id)displayProfileOfType:(long long)arg1;
- (id)initWithLibrary:(id)arg1 objectUniqueID:(id)arg2;
- (void)noteShared;
- (void)updateSettings:(unsigned long long)arg1;
- (void)requestUpdateWithCompletion:(CDUnknownBlockType)arg1;

@end
