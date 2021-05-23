/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class NSString;

@interface CSModalViewControllerBase : CSCoverSheetViewControllerBase

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)viewClass;

- (_Bool)isPortrait;
- (id)view;
- (long long)presentationStyle;
- (void)viewDidLoad;
- (id)viewIfLoaded;
- (long long)presentationType;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)handlePrimaryActionForView:(id)arg1;
- (void)handleSecondaryActionForView:(id)arg1;

@end
