/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSCondition;

__attribute__((visibility("hidden")))
@interface OITSUFastReadInvalidatingCache : NSObject

{
    CDUnknownBlockType mGenerator;
    _Atomic id mValue;
    _Atomic long long mReaderCount;
    _Atomic id mToDispose;
    _Bool mReentrant;
    NSCondition *mCondition;
    _Bool mIsGenerating;
}

- (void)dealloc;
- (void)invalidate;
- (id)value;
- (void)p_setValue:(id)arg1;
- (id)initForReentrant:(_Bool)arg1 withGenerator:(CDUnknownBlockType)arg2;

@end
