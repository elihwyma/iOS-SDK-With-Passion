/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFObjectTable : NSObject

{
    NSMutableArray *m_objects;
    unsigned int m_maximumSize;
}

@property unsigned int maximumSize;

- (id)init;
- (void)clear;
- (int)size;
- (int)deleteObject:(unsigned int)arg1;
- (unsigned int)insertPos;
- (int)selectInto:(int)arg1 io_DC:(id)arg2;
- (int)putObject:(id)arg1 in_objectPos:(unsigned int)arg2;
- (id)getObject:(unsigned int)arg1;

@end
