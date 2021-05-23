/*
 Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

#import <Foundation/NSObject.h>

@class GSTemporaryStorage, NSString;

@protocol GSAdditionStoring;

__attribute__((visibility("hidden")))
@interface GSClientManagedLibrary : NSObject

{
    GSTemporaryStorage *_ts;
}

@property (nonatomic, readonly) NSObject<GSAdditionStoring> *storage;
@property (nonatomic, readonly) NSString *nameSpace;

- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (_Bool)generationsRemove:(id)arg1 error:(id *)arg2;

@end
