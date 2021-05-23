/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface STPropertyStorage : NSObject

{
    struct _SsrwPropertyStorage *m_pPropertyStorage;
}

- (void)close;
- (id)getDocumentPropertyWithId:(int)arg1 propType:(int *)arg2;
- (short)getShortDocumentPropertyWithId:(int)arg1;
- (void)setDocumentPropertyWithId:(int)arg1 to:(id)arg2;
- (id)initWithPropertyStorage:(struct _SsrwPropertyStorage *)arg1;
- (int)getLongDocumentPropertyWithId:(int)arg1;
- (id)getStringDocumentPropertyWithId:(int)arg1;
- (id)getDocumentPropertyWithName:(id)arg1 propType:(int *)arg2;
- (void)setLongDocumentPropertyWithId:(int)arg1 to:(int)arg2;
- (void)setShortDocumentPropertyWithId:(int)arg1 to:(short)arg2;
- (void)setStringDocumentPropertyWithId:(int)arg1 to:(id)arg2;
- (void)setBlobDocumentPropertyWithName:(id)arg1 to:(id)arg2;

@end
