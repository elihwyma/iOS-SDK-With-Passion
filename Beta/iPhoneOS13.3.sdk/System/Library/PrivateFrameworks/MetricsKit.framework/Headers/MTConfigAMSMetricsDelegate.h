/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTObject.h>

@class NSString;

@protocol AMSBagProtocol;

@interface MTConfigAMSMetricsDelegate : MTObject

{
    id <AMSBagProtocol> _bag;
}

@property (retain, nonatomic) id <AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)sources;
- (id)initWithAMSBag:(id)arg1;

@end
