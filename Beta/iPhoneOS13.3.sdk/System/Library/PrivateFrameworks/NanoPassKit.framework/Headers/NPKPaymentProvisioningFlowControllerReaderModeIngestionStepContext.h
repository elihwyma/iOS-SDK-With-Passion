/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSString, NSURL;

@interface NPKPaymentProvisioningFlowControllerReaderModeIngestionStepContext : NPKPaymentProvisioningFlowStepContext

{
    NSURL *_physicalCardImageURL;
    NSString *_title;
    NSString *_subtitle;
    unsigned long long _ingestionState;
    double _ingestionProgress;
}

@property (retain, nonatomic) NSURL *physicalCardImageURL;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned long long ingestionState;
@property (nonatomic) double ingestionProgress;

- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end
