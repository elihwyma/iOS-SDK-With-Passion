/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernTemplateViewElement : SKUIViewElement

{
    NSURL *_reportConcernURL;
    long long _itemIdentifier;
    NSString *_reportConcernExplanation;
}

@property (copy, nonatomic, readonly) NSURL *reportConcernURL;
@property (nonatomic, readonly) long long itemIdentifier;
@property (copy, nonatomic, readonly) NSString *reportConcernExplanation;
@property (copy, nonatomic, readonly) NSArray *reasonElements;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
