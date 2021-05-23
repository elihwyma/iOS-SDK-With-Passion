/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTStandardEventHandler.h>

@protocol MTEnterEventHandlerDelegate;

@interface MTEnterEventHandler : MTStandardEventHandler

@property (weak, nonatomic) id <MTEnterEventHandlerDelegate> delegate;

- (id)eventType;
- (id)knownFields;
- (id)osLanguages:(id)arg1;
- (id)eventVersion:(id)arg1;

@end
