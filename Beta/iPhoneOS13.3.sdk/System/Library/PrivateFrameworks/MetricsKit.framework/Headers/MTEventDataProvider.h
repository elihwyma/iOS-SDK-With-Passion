/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTObject.h>

@class NSDictionary;

@protocol MTEventDataProviderDelegate;

@interface MTEventDataProvider : MTObject

{
    id <MTEventDataProviderDelegate> _delegate;
    NSDictionary *_knownFieldMethods;
}

@property (retain, nonatomic) NSDictionary *knownFieldMethods;
@property (weak, nonatomic) id <MTEventDataProviderDelegate> delegate;

- (id)knownFields;
- (id)processMetricsData:(id)arg1 performanceData:(id)arg2;
- (id)knownFieldMethodsForKnownFields:(id)arg1;
- (SEL)knownFieldAccessorForFieldName:(id)arg1;

@end
