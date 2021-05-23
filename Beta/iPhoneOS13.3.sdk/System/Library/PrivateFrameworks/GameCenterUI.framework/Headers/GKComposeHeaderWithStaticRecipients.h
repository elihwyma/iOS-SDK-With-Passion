/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKComposeHeaderField.h>

@class NSArray;

@interface GKComposeHeaderWithStaticRecipients : GKComposeHeaderField

{
    NSArray *_recipientNameStrings;
}

@property (retain, nonatomic) NSArray *recipientNameStrings;

- (void)dealloc;
- (void)layoutSubviews;

@end
