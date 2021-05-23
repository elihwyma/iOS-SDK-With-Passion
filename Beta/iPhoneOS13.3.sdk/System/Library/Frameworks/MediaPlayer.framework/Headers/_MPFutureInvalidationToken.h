/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPInvalidationFuture, NSString;

@interface _MPFutureInvalidationToken : NSObject <Swift>

{
    MPInvalidationFuture *_future;
}

@property (retain, nonatomic) MPInvalidationFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
