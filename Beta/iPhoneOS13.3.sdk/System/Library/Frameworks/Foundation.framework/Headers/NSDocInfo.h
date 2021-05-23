/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface NSDocInfo : NSObject <Swift>

{
    long long time;
    unsigned short mode;
    struct {
        unsigned int isDir:1;
        unsigned int isSingleFile:1;
        unsigned int isSoftLink:1;
        unsigned int _pad:13;
    } flags;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)setFileAttributes:(id)arg1;
- (id)initWithFileAttributes:(id)arg1;
- (id)initFromInfo:(struct stat *)arg1;

@end
