/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSData.h>

__attribute__((visibility("hidden")))
@interface WebCoreSharedBufferData : NSData

{
    struct RefPtr<const WebCore::SharedBuffer::DataSegment, WTF::DumbPtrTraits<const WebCore::SharedBuffer::DataSegment>> sharedBufferDataSegment;
}

+ (void)initialize;

- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (id).cxx_construct;
- (id)initWithSharedBufferDataSegment:(const struct DataSegment *)arg1;

@end
