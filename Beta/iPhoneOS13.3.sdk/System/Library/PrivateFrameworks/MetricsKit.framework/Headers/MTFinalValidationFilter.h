/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTObject.h>

@class NSString;

@interface MTFinalValidationFilter : MTObject

{
    _Bool _shouldApplyDeRes;
}

@property (nonatomic) _Bool shouldApplyDeRes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)apply:(id)arg1;
- (void)validateFields:(id)arg1;

@end
