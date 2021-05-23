/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSTextCheckingResult.h>

@class CKTextKitEntityAttribute;

@interface CKTextKitTextCheckingResult : NSTextCheckingResult

{
    struct _NSRange _rangeOverride;
    unsigned long long _resultTypeOverride;
    CKTextKitEntityAttribute *_entityAttribute;
}

@property (nonatomic, readonly) CKTextKitEntityAttribute *entityAttribute;

- (struct _NSRange)range;
- (unsigned long long)resultType;
- (id)initWithType:(unsigned long long)arg1 entityAttribute:(id)arg2 range:(struct _NSRange)arg3;

@end
