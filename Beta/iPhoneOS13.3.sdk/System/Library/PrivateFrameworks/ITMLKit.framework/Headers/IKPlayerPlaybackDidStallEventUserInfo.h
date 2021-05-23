/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface IKPlayerPlaybackDidStallEventUserInfo : NSObject

{
    double _elapsedTime;
}

@property (nonatomic, readonly) double elapsedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *properties;

- (id)initWithElapsedTime:(double)arg1;

@end
