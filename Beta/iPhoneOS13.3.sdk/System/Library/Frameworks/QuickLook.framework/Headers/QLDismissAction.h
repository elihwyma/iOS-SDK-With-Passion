/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSString;

@interface QLDismissAction : NSObject

{
    _Bool _shouldDismissQuickLookAutomatically;
    NSString *_title;
    CDUnknownBlockType _completionHandler;
    long long _alertStyle;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long alertStyle;
@property (nonatomic) _Bool shouldDismissQuickLookAutomatically;

+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)actionWithTitle:(id)arg1 alertStyle:(long long)arg2 shouldDismissQuickLookAutomatically:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;

- (id)initWithTitle:(id)arg1 alertStyle:(long long)arg2 shouldDismissQuickLookAutomatically:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;

@end
