/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class ETImageDescriptorExtractor;

@protocol ETDataSource;

__attribute__((visibility("hidden")))
@interface ETDataSourceWithExtractor : NSObject

{
    id <ETDataSource> _source;
    ETImageDescriptorExtractor *_extractor;
}

- (int)numberOfDataPoints;
- (id)dataPointAtIndex:(int)arg1;
- (id)initWithDataSource:(id)arg1 extractor:(id)arg2;

@end
