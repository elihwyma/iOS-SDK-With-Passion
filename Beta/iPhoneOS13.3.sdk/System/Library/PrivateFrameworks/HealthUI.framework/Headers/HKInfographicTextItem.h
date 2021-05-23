/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

@interface HKInfographicTextItem : NSObject

{
    NSAttributedString *_descriptionString;
}

@property (retain, nonatomic) NSAttributedString *descriptionString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDescription:(id)arg1;

@end
