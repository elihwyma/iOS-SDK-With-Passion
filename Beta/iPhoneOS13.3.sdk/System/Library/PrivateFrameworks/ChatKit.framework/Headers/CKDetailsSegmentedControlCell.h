/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKDetailsCell.h>

@class NSString, UISegmentedControl;

__attribute__((visibility("hidden")))
@interface CKDetailsSegmentedControlCell : CKDetailsCell

{
    UISegmentedControl *_segmentedControl;
}

@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (_Bool)shouldHighlight;

- (void)layoutSubviews;

@end
