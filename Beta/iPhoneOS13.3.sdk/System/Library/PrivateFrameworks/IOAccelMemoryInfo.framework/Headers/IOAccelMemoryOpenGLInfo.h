/*
 Image: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IOAccelMemoryOpenGLInfo : NSObject

{
    int pid;
    NSString *sharegroup;
    unsigned long long objectType;
    int name;
    int blamedProcess;
    NSString *objectDescription;
    NSString *debugLabel;
    id _expansionData;
}

@property int pid;
@property (retain) NSString *sharegroup;
@property unsigned long long objectType;
@property int name;
@property int blamedProcess;
@property (retain) NSString *objectDescription;
@property (retain) NSString *debugLabel;

- (void)dealloc;
- (id)description;

@end
