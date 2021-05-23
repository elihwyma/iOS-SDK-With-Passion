/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class WKContentView;

@protocol WKFormControl;

__attribute__((visibility("hidden")))
@interface WKFormPeripheralBase : NSObject

{
    RetainPtr_5ad583fd _control;
    _Bool _editing;
    WKContentView *_view;
}

@property (nonatomic, readonly) WKContentView *view;
@property (nonatomic, readonly) NSObject<WKFormControl> *control;
@property (nonatomic, readonly, getter=isEditing) _Bool editing;

- (void)beginEditing;
- (void)endEditing;
- (id).cxx_construct;
- (id)assistantView;
- (_Bool)handleKeyEvent:(id)arg1;
- (id)initWithView:(id)arg1 control:(RetainPtr_5ad583fd *)arg2;

@end
