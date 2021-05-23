/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CKTextKitContext, NSAttributedString, NSCharacterSet, NSString;

@interface CKTextKitTailTruncater : NSObject

{
    CKTextKitContext *_context;
    NSAttributedString *_truncationAttributedString;
    NSCharacterSet *_avoidTailTruncationSet;
    struct CGSize _constrainedSize;
    vector_b5e32e34 _visibleRanges;
    struct CGRect _truncationStringRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) vector_b5e32e34 visibleRanges;
@property (nonatomic, readonly) struct CGRect truncationStringRect;

- (id).cxx_construct;
- (id)initWithContext:(id)arg1 truncationAttributedString:(id)arg2 avoidTailTruncationSet:(id)arg3 constrainedSize:(struct CGSize)arg4;
- (unsigned long long)_calculateCharacterIndexBeforeTruncationMessage:(id)arg1 textStorage:(id)arg2 textContainer:(id)arg3;
- (unsigned long long)_findTruncationInsertionPointAtOrBeforeCharacterIndex:(unsigned long long)arg1 layoutManager:(id)arg2 textStorage:(id)arg3;
- (void)_truncate;

@end
