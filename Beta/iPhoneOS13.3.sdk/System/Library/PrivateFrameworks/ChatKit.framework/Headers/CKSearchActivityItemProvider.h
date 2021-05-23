/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIActivityItemProvider.h>

@class LPLinkMetadata;

@interface CKSearchActivityItemProvider : UIActivityItemProvider

{
    id _payload;
    LPLinkMetadata *_metadata;
}

@property (retain, nonatomic) id payload;
@property (retain, nonatomic) LPLinkMetadata *metadata;

- (id)item;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1 metadata:(id)arg2;

@end
