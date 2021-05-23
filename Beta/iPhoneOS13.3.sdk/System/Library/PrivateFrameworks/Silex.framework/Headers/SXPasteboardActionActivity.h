/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, UIPasteboard;

@interface SXPasteboardActionActivity : NSObject

{
    NSString *_label;
    unsigned long long _type;
    UIPasteboard *_pasteboard;
    NSString *_string;
}

@property (copy, nonatomic, readonly) UIPasteboard *pasteboard;
@property (copy, nonatomic, readonly) NSString *string;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long type;

- (void)invokeWithAction:(id)arg1 invocationMethod:(unsigned long long)arg2;
- (id)initWithLabel:(id)arg1 type:(unsigned long long)arg2 pasteboard:(id)arg3 string:(id)arg4;

@end
