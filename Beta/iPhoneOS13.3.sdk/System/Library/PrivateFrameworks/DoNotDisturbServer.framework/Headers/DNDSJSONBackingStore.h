/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@protocol DNDSBackingStoreDelegate;

@interface DNDSJSONBackingStore : NSObject

{
    Class _recordClass;
    NSURL *_fileURL;
    unsigned long long _versionNumber;
    _Bool _deviceOutOfSpace;
    id <DNDSBackingStoreDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *sysdiagnoseDataIdentifier;
@property (weak, nonatomic) id <DNDSBackingStoreDelegate> delegate;

- (void)dealloc;
- (id)sysdiagnoseDataForDate:(id)arg1;
- (id)readRecordWithError:(id *)arg1;
- (unsigned long long)writeRecord:(id)arg1 error:(id *)arg2;
- (id)initWithRecordClass:(Class)arg1 fileURL:(id)arg2 versionNumber:(unsigned long long)arg3;

@end
