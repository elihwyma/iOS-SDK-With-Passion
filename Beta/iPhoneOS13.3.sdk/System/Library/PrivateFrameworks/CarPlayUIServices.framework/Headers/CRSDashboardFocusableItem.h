/*
 Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
 */

#import <Foundation/NSObject.h>

@class NSUUID, UIView;

@protocol CRSUIDashboardFocusableItemProviding;

@interface CRSDashboardFocusableItem : NSObject

{
    NSUUID *_identifier;
    UIView<CRSUIDashboardFocusableItemProviding> *_focusProvidingItem;
    struct CGRect _frameInWindow;
}

@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) struct CGRect frameInWindow;
@property (weak, nonatomic) UIView<CRSUIDashboardFocusableItemProviding> *focusProvidingItem;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFocusableView:(id)arg1;

@end
