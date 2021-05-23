/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingUserTriggeredFeature : NSObject <Swift>

{
    _Bool _active;
    _Bool _autoRemove;
    id _userInfo;
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=shouldAutoRemove) _Bool autoRemove;
@property (retain, nonatomic) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end
