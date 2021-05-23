/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPModelObject;

@interface MPModelLibraryKeepLocalChangeRequest : NSObject <Swift>

{
    MPModelObject *_modelObject;
    long long _enableState;
}

@property (retain, nonatomic) MPModelObject *modelObject;
@property (nonatomic) long long enableState;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
