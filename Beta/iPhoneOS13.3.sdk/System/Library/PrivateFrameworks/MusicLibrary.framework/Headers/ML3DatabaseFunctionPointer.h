/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3DatabaseFunction.h>

@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction

{
    CDUnknownFunctionPointerType _functionPointer;
    void *_userData;
}

@property (nonatomic) CDUnknownFunctionPointerType functionPointer;
@property (nonatomic) void *userData;

- (_Bool)registerWithConnection:(id)arg1;

@end
