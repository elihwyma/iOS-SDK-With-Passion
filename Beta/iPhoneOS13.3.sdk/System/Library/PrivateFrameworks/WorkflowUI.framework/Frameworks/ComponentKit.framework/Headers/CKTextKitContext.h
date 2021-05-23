/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class NSLayoutManager, NSTextContainer, NSTextStorage;

@interface CKTextKitContext : NSObject

{
    struct mutex _textKitMutex;
    NSLayoutManager *_layoutManager;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
}

- (id).cxx_construct;
- (id)initWithAttributedString:(id)arg1 lineBreakMode:(long long)arg2 maximumNumberOfLines:(unsigned long long)arg3 constrainedSize:(struct CGSize)arg4 layoutManagerFactory:(CDUnknownFunctionPointerType)arg5;
- (void)performBlockWithLockedTextKitComponents:(CDUnknownBlockType)arg1;

@end
