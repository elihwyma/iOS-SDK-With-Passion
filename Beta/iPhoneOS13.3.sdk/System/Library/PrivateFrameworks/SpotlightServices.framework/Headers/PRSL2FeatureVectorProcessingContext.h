/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@interface PRSL2FeatureVectorProcessingContext : NSObject

{
    unsigned short *_expandedFeatureExecutionOrder;
    unsigned long long _expandedFeatureCount;
}

@property (nonatomic) unsigned short *expandedFeatureExecutionOrder;
@property (nonatomic) unsigned long long expandedFeatureCount;

- (void)dealloc;
- (id)initWithFeatureOrder:(id)arg1 withInflation:(unsigned long long)arg2 withInflatedIndexToSize:(id)arg3;

@end
