/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface STStgInfo : NSObject

{
    NSString *m_pstrName;
    int m_type;
    unsigned int m_userFlags;
    unsigned int m_size;
    long long m_creationTime;
    long long m_modificationTime;
    int m_accessMode;
    CDStruct_214f2dba m_clsid;
}

- (id)init;
- (void)setType:(int)arg1;
- (void)setName:(id)arg1;
- (void)setSize:(unsigned int)arg1;
- (void)setCreationTime:(long long)arg1;
- (void)setModificationTime:(long long)arg1;
- (int)getType;
- (id)getName;
- (unsigned int)getSize;
- (void)setCLSID:(CDStruct_214f2dba)arg1;
- (id)initWithStgInfo:(const struct _StgInfo *)arg1;
- (unsigned int)getUserFlags;
- (void)setUserFlags:(unsigned int)arg1;
- (long long)getCreationTime;
- (long long)getModificationTime;
- (int)getAccessMode;
- (void)setAccessMode:(int)arg1;
- (CDStruct_214f2dba)getCLSID;

@end
