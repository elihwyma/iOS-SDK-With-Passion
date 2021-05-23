/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SACSSymbolOwnerWrapper : NSObject

{
    _Bool _hasTextExecSegment;
    _Bool _isSparse;
    struct _CSTypeRef _symbolOwner;
    struct _CSRange _textSegmentRange;
}

@property (readonly) struct _CSTypeRef symbolOwner;
@property (readonly) struct _CSRange textSegmentRange;
@property (readonly) _Bool hasTextExecSegment;
@property (readonly) _Bool isSparse;

- (void)dealloc;
- (id)initWithCSSymbolOwner:(struct _CSTypeRef)arg1 isSparse:(_Bool)arg2;

@end
