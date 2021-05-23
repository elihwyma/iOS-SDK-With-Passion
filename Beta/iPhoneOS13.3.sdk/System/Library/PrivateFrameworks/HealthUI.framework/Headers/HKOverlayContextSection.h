/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface HKOverlayContextSection : NSObject

{
    NSString *title;
    NSArray *items;
    NSString *_localizedSectionTitle;
    NSArray *_overlayContextItems;
}

@property (nonatomic, readonly) NSString *localizedSectionTitle;
@property (nonatomic, readonly) NSArray *overlayContextItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *items;

- (id)initWithSectionTitle:(id)arg1 overlayContextItems:(id)arg2;

@end
