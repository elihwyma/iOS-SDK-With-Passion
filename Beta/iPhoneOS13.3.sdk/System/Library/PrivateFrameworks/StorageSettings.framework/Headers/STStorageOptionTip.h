/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <StorageSettings/STStorageTip.h>

@class NSObject, NSString;

@protocol STStorageOptionTipDelegate;

@interface STStorageOptionTip : STStorageTip

{
    _Bool _mayCauseDataLoss;
    NSObject<STStorageOptionTipDelegate> *_delegate;
    NSString *_confirmationText;
    NSString *_confirmationButtonTitle;
}

@property (weak) NSObject<STStorageOptionTipDelegate> *delegate;
@property (retain) NSString *enableButtonTitle;
@property (nonatomic) float activationPercent;
@property (retain, nonatomic) NSString *activatingString;
@property (nonatomic) long long immediateGain;
@property (nonatomic) long long eventualGain;
@property _Bool mayCauseDataLoss;
@property (retain) NSString *confirmationText;
@property (retain) NSString *confirmationButtonTitle;

- (id)init;
- (id)getValue:(id)arg1;
- (void)setValue:(id)arg1 specifier:(id)arg2;
- (void)enableOption;

@end
