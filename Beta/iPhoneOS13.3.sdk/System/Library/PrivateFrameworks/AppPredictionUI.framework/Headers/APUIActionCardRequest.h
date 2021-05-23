/*
 Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
 */

#import <CardServices/CRSCardRequest.h>

@class APUIActionCardViewConfig;

@interface APUIActionCardRequest : CRSCardRequest

{
    APUIActionCardViewConfig *_cardViewConfig;
}

@property (nonatomic, readonly) APUIActionCardViewConfig *cardViewConfig;

- (id)initWithCardViewConfig:(id)arg1;

@end
