/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface WebCoreSharedBufferResourceLoaderDelegate : NSObject

{
    struct ImageDecoderAVFObjC *_parent;
    long long _expectedContentSize;
    struct RetainPtr<NSData> _data;
    _Bool _complete;
    struct Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0, WTF::CrashOnOverflow, 16> _requests;
    struct Lock _dataLock;
}

@property (readonly) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithParent:(struct ImageDecoderAVFObjC *)arg1;
- (id).cxx_construct;
- (void)enqueueRequest:(id)arg1;
- (void)fulfillPendingRequests;
- (_Bool)canFulfillRequest:(id)arg1;
- (void)fulfillRequest:(id)arg1;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (void)setExpectedContentSize:(long long)arg1;
- (void)updateData:(id)arg1 complete:(_Bool)arg2;

@end
