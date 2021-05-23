/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <MobileMailUI/MFMessageDisplayMetrics.h>

@interface MFMessageDisplayMetricsRegular : MFMessageDisplayMetrics

- (double)topToSenderBaseline;
- (double)baselineToBaselineSpacing;
- (double)recipientBaselineToFirstSeparator;
- (double)firstSeparatorToSubjectBaseline;
- (double)headerBottomPadding;
- (double)statusIndicatorVerticalSpacing;

@end
