/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTBaseEventDataProvider.h>

@protocol MTVPAFBaseEventDataProviderDelegate;

@interface MTVPAFBaseEventDataProvider : MTBaseEventDataProvider

@property (weak, nonatomic) id <MTVPAFBaseEventDataProviderDelegate> delegate;

- (id)knownFields;
- (id)isOffline:(id)arg1;
- (id)osLanguages:(id)arg1;

@end
