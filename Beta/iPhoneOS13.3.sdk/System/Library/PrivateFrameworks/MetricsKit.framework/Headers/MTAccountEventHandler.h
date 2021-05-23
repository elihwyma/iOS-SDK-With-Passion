/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTStandardEventHandler.h>

@protocol MTAccountEventHandlerDelegate;

@interface MTAccountEventHandler : MTStandardEventHandler

@property (weak, nonatomic) id <MTAccountEventHandlerDelegate> delegate;

- (id)eventType;
- (id)knownFields;
- (id)eventVersion:(id)arg1;
- (id)type:(id)arg1;

@end
