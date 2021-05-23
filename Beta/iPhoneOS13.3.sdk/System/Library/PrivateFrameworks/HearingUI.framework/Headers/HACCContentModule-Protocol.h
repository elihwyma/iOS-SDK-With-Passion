/*
 Image: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
 */

#import <HearingUI/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol HACCContentModuleDelegate;

@protocol HACCContentModule <Swift>

@property (weak, nonatomic) id <HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;

- (MISSING_TYPE *)enabled;
- (MISSING_TYPE *)updateValue;
- (MISSING_TYPE *)contentValue;

@end
