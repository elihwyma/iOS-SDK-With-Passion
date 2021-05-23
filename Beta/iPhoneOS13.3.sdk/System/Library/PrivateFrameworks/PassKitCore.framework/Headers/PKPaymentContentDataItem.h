/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentDataItem.h>

@class PKPaymentContentItem;

@interface PKPaymentContentDataItem : PKPaymentDataItem

{
    PKPaymentContentItem *_contentItem;
}

@property (nonatomic, readonly) PKPaymentContentItem *contentItem;

+ (long long)dataType;
+ (_Bool)supportsMultipleItems;

- (id)initWithContentItem:(id)arg1;
- (_Bool)isValidWithError:(id *)arg1;

@end
