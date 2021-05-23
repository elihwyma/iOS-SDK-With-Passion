/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSString;

@interface IKPlayerPlaybackErrorEventUserInfo : NSObject

{
    _Bool _shouldStopDueToError;
    NSError *_error;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) _Bool shouldStopDueToError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *properties;

- (id)initWithError:(id)arg1 shouldStopDueToError:(_Bool)arg2;

@end
