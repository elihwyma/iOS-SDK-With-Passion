/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

@interface HKInfographicContentItem : NSObject

{
    NSAttributedString *_titleString;
    NSAttributedString *_descriptionString;
}

@property (retain, nonatomic) NSAttributedString *titleString;
@property (retain, nonatomic) NSAttributedString *descriptionString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithTitle:(id)arg1 description:(id)arg2;

@end
