/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVPlayerProviding;

@interface SVPlayerItemObserverFactory : NSObject

{
    id <SVPlayerProviding> _playerProvider;
}

@property (nonatomic, readonly) id <SVPlayerProviding> playerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createPlayerItemObserverForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1;

@end
