/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ML3DatabaseFunction : NSObject

{
    int _argumentCount;
    NSString *_name;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int argumentCount;

- (id)initWithName:(id)arg1 argumentCount:(int)arg2;
- (_Bool)registerWithConnection:(id)arg1;

@end
