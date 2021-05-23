/*
 Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

#import <Foundation/NSObject.h>

@class ADMRAIDAction, NSArray, NSNumber, NSString;

@interface ADAdActionPublicAttributes : NSObject

{
    _Bool _actionLeavesApplication;
    _Bool _actionViewControllerHidesStatusBar;
    int _action;
    int _transitionType;
    unsigned long long _actionViewControllerPresentationOrientationMask;
    NSString *_actionURLString;
    ADMRAIDAction *_MRAIDAction;
    NSNumber *_adamIdentifier;
    NSArray *_iTunesMetadata;
    NSString *_calendarEventIdentifier;
}

@property (nonatomic) _Bool actionLeavesApplication;
@property (nonatomic) int action;
@property (nonatomic) unsigned long long actionViewControllerPresentationOrientationMask;
@property (nonatomic) _Bool actionViewControllerHidesStatusBar;
@property (nonatomic) int transitionType;
@property (copy, nonatomic) NSString *actionURLString;
@property (copy, nonatomic) ADMRAIDAction *MRAIDAction;
@property (copy, nonatomic) NSNumber *adamIdentifier;
@property (copy, nonatomic) NSArray *iTunesMetadata;
@property (copy, nonatomic) NSString *calendarEventIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_actionDescription;

@end
