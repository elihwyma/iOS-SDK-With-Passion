/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface IKPlayerTimeDidChangeEventUserInfo : NSObject

{
    double _interval;
    double _elapsedTime;
}

@property (nonatomic, readonly) double interval;
@property (nonatomic, readonly) double elapsedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *properties;

- (id)initWithInterval:(double)arg1 elapsedTime:(double)arg2;

@end
