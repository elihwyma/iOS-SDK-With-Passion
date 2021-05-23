/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTEventDataProvider.h>

@protocol MTEventHandlerDelegate;

@interface MTEventHandler : MTEventDataProvider

@property (weak, nonatomic) id <MTEventHandlerDelegate> delegate;

+ (void)createEventContextCache;
+ (void)clearEventContextCache;
+ (id)currentEventContextCache;
+ (id)cachableWithKey:(id)arg1 onBackgroundThread:(_Bool)arg2 block:(CDUnknownBlockType)arg3;

- (id)eventType;
- (id)knownFields;
- (id)eventVersion:(id)arg1;
- (id)metricsDataWithCallerSuppliedFields:(id)arg1;
- (_Bool)mtIncludeBaseFields;

@end
