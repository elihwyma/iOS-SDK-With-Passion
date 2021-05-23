/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/WKFormPeripheralBase.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKFormSelectControl : WKFormPeripheralBase

{
    RetainPtr_5ad583fd _control;
}

@property (nonatomic, readonly) NSString *selectFormPopoverTitle;

- (id).cxx_construct;
- (id)initWithView:(id)arg1;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;

@end
