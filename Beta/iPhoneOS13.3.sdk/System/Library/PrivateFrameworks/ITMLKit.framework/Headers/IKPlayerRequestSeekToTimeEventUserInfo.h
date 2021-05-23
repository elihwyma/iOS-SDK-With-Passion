/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface IKPlayerRequestSeekToTimeEventUserInfo : NSObject

{
    _Bool _shouldSeek;
    double _requestedTime;
    double _currentTime;
    double _proposedTime;
}

@property (nonatomic, readonly) double requestedTime;
@property (nonatomic, readonly) double currentTime;
@property (nonatomic, readonly) _Bool shouldSeek;
@property (nonatomic, readonly) double proposedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *properties;

- (void)processReturnJSValue:(id)arg1 inContext:(id)arg2;
- (id)initWithRequestedTime:(double)arg1 currentTime:(double)arg2;

@end
