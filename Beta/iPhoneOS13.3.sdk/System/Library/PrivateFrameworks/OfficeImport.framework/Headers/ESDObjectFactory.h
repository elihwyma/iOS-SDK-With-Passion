/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDObjectFactory : NSObject

{
    struct EshObjectFactory *eshObjectFactory;
    NSMutableArray *eshObjectFactoryStack;
}

+ (id)threadLocalFactory;

- (id)init;
- (void)dealloc;
- (struct EshObject *)createObjectWithType:(unsigned short)arg1;
- (struct EshObject *)createObjectWithType:(unsigned short)arg1 version:(unsigned short)arg2;
- (void)replaceHostEshFactoryWith:(struct EshObjectFactory *)arg1;
- (void)restoreHostEshFactory;
- (void)setEshFactory:(struct EshObjectFactory *)arg1;

@end
