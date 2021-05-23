/*
 Image: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EAGLSharegroup : NSObject

{
    struct _EAGLSharegroupPrivate *_private;
    NSString *debugLabel;
}

@property (copy, nonatomic) NSString *debugLabel;

- (id)init;
- (void)dealloc;
- (id)initWithAPI:(unsigned long long)arg1;
- (id)initWithAPI:(unsigned long long)arg1 sharedWithCompute:(_Bool)arg2;
- (unsigned long long)APIs;
- (void)loadGLIPlugin:(struct __GLDPixelFormatRec *)arg1 sharedWithCompute:(_Bool)arg2;
- (struct __GLISharedRec *)getGLIShared;

@end
