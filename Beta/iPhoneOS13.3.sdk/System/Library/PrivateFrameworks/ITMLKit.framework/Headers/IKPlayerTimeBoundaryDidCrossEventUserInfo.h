/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface IKPlayerTimeBoundaryDidCrossEventUserInfo : NSObject

{
    double _boundary;
}

@property (nonatomic, readonly) double boundary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *properties;

- (id)initWithBoundary:(double)arg1;

@end
