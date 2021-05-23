/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface TSUDispatchData : NSObject

{
    NSObject<OS_dispatch_data> *_data;
    _Bool _alwaysDefragmentData;
    unsigned long long _size;
    unsigned long long _maxFragmentsCount;
    NSObject<OS_dispatch_data> *_fragmentedData;
    NSObject<OS_dispatch_data> *_defragmentedData;
    unsigned long long _fragmentsCount;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_data> *fragmentedData;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *defragmentedData;
@property (nonatomic, readonly) unsigned long long fragmentsCount;
@property (nonatomic) _Bool alwaysDefragmentData;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *data;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic) unsigned long long maxFragmentsCount;

- (id)init;
- (id)initWithData:(id)arg1;
- (void)append:(id)arg1;
- (void)defragmentData;

@end
