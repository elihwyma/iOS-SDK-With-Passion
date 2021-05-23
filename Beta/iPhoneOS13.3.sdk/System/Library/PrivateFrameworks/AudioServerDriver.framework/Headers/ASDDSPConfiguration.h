/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface ASDDSPConfiguration : NSObject

{
    NSArray *_dspItems;
}

@property (copy, nonatomic) NSArray *dspItems;

- (id)initWithArray:(id)arg1 resourcePath:(id)arg2;

@end
