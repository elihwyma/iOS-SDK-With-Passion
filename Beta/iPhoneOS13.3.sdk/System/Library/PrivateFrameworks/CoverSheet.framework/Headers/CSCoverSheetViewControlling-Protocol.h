/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/Swift-Protocol.h>

@protocol CSCoverSheetViewPresenting;

@protocol CSCoverSheetViewControlling <Swift>

@property (weak, nonatomic) id <CSCoverSheetViewPresenting> presenter;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) long long presentationType;
@property (nonatomic, readonly) long long presentationTransition;
@property (nonatomic, readonly) long long presentationPriority;
@property (nonatomic, readonly) long long presentationAltitude;

@end
