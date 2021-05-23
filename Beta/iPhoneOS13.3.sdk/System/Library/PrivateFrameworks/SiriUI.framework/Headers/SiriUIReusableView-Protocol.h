/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/Swift-Protocol.h>

@class SiriUISnippetViewController;

@protocol SiriUIReusableView <Swift>

@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;

+ (unsigned short)defaultHeight;
+ (unsigned short)elementKind;
+ (unsigned short)reuseIdentifier;

@end
