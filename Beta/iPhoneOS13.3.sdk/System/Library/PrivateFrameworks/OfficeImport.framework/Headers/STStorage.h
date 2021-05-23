/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/STSStgObject.h>

__attribute__((visibility("hidden")))
@interface STStorage : STSStgObject

{
    struct _Storage *m_pCStorage;
}

- (id)init;
- (void)dealloc;
- (void)close;
- (void)setClass:(CDStruct_214f2dba)arg1;
- (id)initWithCStorage:(struct _Storage *)arg1;
- (id)openStream:(id)arg1 withMode:(int)arg2;
- (id)openStorage:(id)arg1 withMode:(int)arg2;
- (id)getInfo;
- (id)getChildrenInfo;
- (int)getChildType:(id)arg1;

@end
