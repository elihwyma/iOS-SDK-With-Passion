/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3DatabaseFunction.h>

@interface ML3DatabaseFunctionBlock : ML3DatabaseFunction

{
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block;

- (_Bool)registerWithConnection:(id)arg1;

@end
