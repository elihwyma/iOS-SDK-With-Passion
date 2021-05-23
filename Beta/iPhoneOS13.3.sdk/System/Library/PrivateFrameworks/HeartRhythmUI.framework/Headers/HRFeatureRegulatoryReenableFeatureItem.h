/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

@protocol HRFeatureRegulatoryPanelDisplayUpdateDelegate, HRFeatureRegulatoryReenableFeatureActionDelegate;

@interface HRFeatureRegulatoryReenableFeatureItem : NSObject

{
    NSString *_productName;
    id <HRFeatureRegulatoryReenableFeatureActionDelegate> _delegate;
}

@property (nonatomic) NSString *productName;
@property (weak, nonatomic) id <HRFeatureRegulatoryReenableFeatureActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSAttributedString *titleString;
@property (copy, nonatomic, readonly) NSAttributedString *valueString;
@property (nonatomic, readonly) _Bool isInteractive;
@property (nonatomic, readonly) long long cellAccessoryType;
@property (weak, nonatomic) id <HRFeatureRegulatoryPanelDisplayUpdateDelegate> updateDelegate;

- (void)handleUserInteractionWithItemWithHostViewController:(id)arg1;
- (id)initWithProductName:(id)arg1 delegate:(id)arg2;

@end
