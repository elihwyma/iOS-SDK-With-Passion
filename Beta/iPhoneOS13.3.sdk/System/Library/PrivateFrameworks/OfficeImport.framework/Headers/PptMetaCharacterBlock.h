/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PptMetaCharacterBlock : NSObject

{
    int mType;
    int mPosition;
    int mExtraData;
}

- (int)type;
- (int)position;
- (void)setPosition:(int)arg1;
- (int)extraData;
- (id)initWithType:(int)arg1 position:(int)arg2 extraData:(int)arg3;
- (id)initWithType:(int)arg1 position:(int)arg2;

@end
