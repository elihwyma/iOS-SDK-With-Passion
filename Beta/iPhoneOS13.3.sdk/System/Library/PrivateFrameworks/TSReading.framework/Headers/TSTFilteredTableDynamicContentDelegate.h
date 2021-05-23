/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, TSTTableModel;

@interface TSTFilteredTableDynamicContentDelegate : NSObject

{
    TSTTableModel *mTableModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)dynamicContentMustDrawOnMainThread;
- (_Bool)cell:(id *)arg1 forCellID:(CDStruct_0441cfb5)arg2;
- (id)initWithTableModel:(id)arg1;

@end
