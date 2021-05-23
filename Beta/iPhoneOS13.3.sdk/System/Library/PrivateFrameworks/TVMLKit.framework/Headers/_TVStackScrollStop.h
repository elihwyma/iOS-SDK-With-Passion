/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@interface _TVStackScrollStop : NSObject

{
    long long _sectionIndex;
    long long _edge;
    double _offset;
}

@property (nonatomic) long long sectionIndex;
@property (nonatomic) long long edge;
@property (nonatomic) double offset;

- (id)init;

@end
