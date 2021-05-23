/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

@protocol HRFeatureRegulatoryPanelDisplayUpdateDelegate;

@interface HRFeatureRegulatoryUDIItem : NSObject

{
    NSString *_productName;
    long long _deviceType;
}

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
- (id)initWithProductName:(id)arg1 deviceType:(long long)arg2;
- (id)udiString;

@end
