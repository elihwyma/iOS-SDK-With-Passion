/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <UIKit/UIViewController.h>

@class BiometricKit, NSMutableDictionary, NSString;

@protocol BiometricKitUIEnrollResultDelegate;

@interface BiometricKitUIEnrollViewController : UIViewController

{
    NSMutableDictionary *_properties;
    BiometricKit *_biometricKit;
    id <BiometricKitUIEnrollResultDelegate> _delegate;
}

@property (retain, nonatomic) BiometricKit *biometricKit;
@property (nonatomic) id <BiometricKitUIEnrollResultDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)restartEnroll;
- (void)cancelEnroll;

@end
