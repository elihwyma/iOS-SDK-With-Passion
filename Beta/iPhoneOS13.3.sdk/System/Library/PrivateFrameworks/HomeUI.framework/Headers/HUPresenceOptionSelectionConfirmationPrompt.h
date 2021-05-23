/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HUPresenceOptionSelectionConfirmationPrompt : NSObject

{
    _Bool _resetLocationToHomeOnConfirmation;
    NSString *_alertTitle;
    NSString *_alertBody;
}

@property (copy, nonatomic, readonly) NSString *alertTitle;
@property (copy, nonatomic, readonly) NSString *alertBody;
@property (nonatomic, readonly) _Bool resetLocationToHomeOnConfirmation;

- (id)init;
- (id)initWithAlertTitle:(id)arg1 alertBody:(id)arg2 resetLocationToHomeOnConfirmation:(_Bool)arg3;

@end
