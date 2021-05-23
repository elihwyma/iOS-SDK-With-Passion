/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UICollectionReusableView.h>

@class NSString, SiriUISnippetViewController;

@interface SiriUIReusableFooterView : UICollectionReusableView

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;

+ (double)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;

- (struct UIEdgeInsets)edgeInsets;

@end
