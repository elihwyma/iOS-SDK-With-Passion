/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@interface MDLTextureFilter : NSObject

{
    unsigned long long sWrapMode;
    unsigned long long tWrapMode;
    unsigned long long rWrapMode;
    unsigned long long minFilter;
    unsigned long long magFilter;
    unsigned long long mipFilter;
}

@property (nonatomic) unsigned long long sWrapMode;
@property (nonatomic) unsigned long long tWrapMode;
@property (nonatomic) unsigned long long rWrapMode;
@property (nonatomic) unsigned long long minFilter;
@property (nonatomic) unsigned long long magFilter;
@property (nonatomic) unsigned long long mipFilter;

- (id)init;

@end
