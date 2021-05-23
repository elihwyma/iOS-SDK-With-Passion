/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HeartRhythmUI/Swift-Protocol.h>

@class NSAttributedString;

@protocol HRFeatureRegulatoryPanelDisplayUpdateDelegate;

@protocol HRFeatureRegulatoryPanelDisplayable <Swift>

@property (copy, nonatomic, readonly) NSAttributedString *titleString;
@property (copy, nonatomic, readonly) NSAttributedString *valueString;
@property (nonatomic, readonly) _Bool isInteractive;
@property (nonatomic, readonly) long long cellAccessoryType;
@property (weak, nonatomic) id <HRFeatureRegulatoryPanelDisplayUpdateDelegate> updateDelegate;

@end
