/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVPlayerProviding, SVTimeConverting;

@interface SVVideoTimeProviderFactory : NSObject

{
    id <SVPlayerProviding> _playerProvider;
    id <SVTimeConverting> _timeConverter;
}

@property (nonatomic, readonly) id <SVPlayerProviding> playerProvider;
@property (nonatomic, readonly) id <SVTimeConverting> timeConverter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createTimeProviderForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1 timeConverter:(id)arg2;

@end
