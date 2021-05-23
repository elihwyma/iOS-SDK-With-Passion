/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernReasonViewElement : SKUIViewElement

{
    NSNumber *_reasonID;
    NSString *_name;
    NSString *_uppercaseName;
}

@property (copy, nonatomic, readonly) NSNumber *reasonID;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *uppercaseName;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
