//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSError, VUIAsynchronousWorkToken, VUIMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMediaLibraryOperation : VUIAsynchronousOperation
{
    VUIMediaLibrary *_mediaLibrary;
    NSError *_error;
    VUIAsynchronousWorkToken *_asyncWorkToken;
}

@property(retain, nonatomic) VUIAsynchronousWorkToken *asyncWorkToken; // @synthesize asyncWorkToken=_asyncWorkToken;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
// - (void).cxx_destruct;
- (void)cancel;
- (id)initWithMediaLibrary:(id)arg1;
- (id)init;

@end
