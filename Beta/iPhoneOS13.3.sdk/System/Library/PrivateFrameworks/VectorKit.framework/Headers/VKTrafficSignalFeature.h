/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKTrafficFeature.h>

@interface VKTrafficSignalFeature : VKTrafficFeature

{
    long long _type;
}

@property (nonatomic, readonly) long long type;

- (id)initWithTrafficSignal:(id)arg1;

@end
