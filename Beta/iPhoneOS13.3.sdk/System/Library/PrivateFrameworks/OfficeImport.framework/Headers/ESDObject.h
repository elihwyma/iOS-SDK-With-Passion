/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class ESDContainer;

__attribute__((visibility("hidden")))
@interface ESDObject : NSObject

{
    struct EshObject *mEshObject;
    ESDContainer *mParent;
    _Bool mIsChart;
}

- (void)dealloc;
- (id)parent;
- (id)initWithType:(unsigned short)arg1;
- (_Bool)isChart;
- (struct EshObject *)eshObject;
- (struct EshGroup *)eshGroup;
- (int)shapeID;
- (struct EshShape *)eshShape;
- (id)initWithEshObject:(struct EshObject *)arg1;
- (id)initFromReader:(struct OcReader *)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3;
- (void)writeToWriter:(struct OcWriter *)arg1;
- (void)setChart:(_Bool)arg1;
- (id)initForExcelBinaryWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;
- (id)initPBWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;

@end
