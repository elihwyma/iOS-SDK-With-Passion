/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaLibrary, NSString;

@interface MPMediaLibraryConnectionAssertion : NSObject

{
    MPMediaLibrary *_library;
    NSString *_identifier;
}

@property (nonatomic, readonly) NSString *identifier;

- (void)dealloc;
- (id)description;
- (id)_initWithMediaLibrary:(id)arg1 identifier:(id)arg2;

@end
