/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebUndoStep : NSObject

{
    struct RefPtr<WebCore::UndoStep, WTF::DumbPtrTraits<WebCore::UndoStep>> m_step;
}

+ (void)initialize;
+ (id)stepWithUndoStep:(Ref_d1ef333b *)arg1;

- (void)dealloc;
- (id).cxx_construct;
- (struct UndoStep *)step;
- (id)initWithUndoStep:(Ref_d1ef333b *)arg1;

@end
