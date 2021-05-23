/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <BarcodeSupport/Swift-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol BCSActionDelegate;

@protocol BCSAction <Swift>

@property (weak, nonatomic) id <BCSActionDelegate> delegate;
@property (nonatomic, readonly) NSURL *urlThatCanBeOpened;
@property (copy, nonatomic, readonly) NSString *defaultActionTargetApplicationBundleIdentifier;
@property (copy, nonatomic, readonly) NSString *localizedDefaultActionTitle;
@property (copy, nonatomic, readonly) NSString *localizedDefaultActionDescription;
@property (copy, nonatomic, readonly) NSString *localizedActionDescription;
@property (copy, nonatomic, readonly) NSArray *actionPickerItems;

- (unsigned short)performAction;
- (unsigned short)performDefaultAction;
- (unsigned short)showActionPicker;

@end
