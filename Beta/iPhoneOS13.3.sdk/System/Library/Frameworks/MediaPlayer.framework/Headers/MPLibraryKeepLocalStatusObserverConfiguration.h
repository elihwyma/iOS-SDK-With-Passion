/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPModelObject;

@interface MPLibraryKeepLocalStatusObserverConfiguration : NSObject

{
    long long _enableState;
    MPModelObject *_identifyingModelObject;
}

@property (nonatomic) long long enableState;
@property (retain, nonatomic) MPModelObject *identifyingModelObject;

@end
