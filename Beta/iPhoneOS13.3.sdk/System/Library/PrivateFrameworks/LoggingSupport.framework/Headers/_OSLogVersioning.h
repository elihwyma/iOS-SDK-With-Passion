/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class _OSLogCollectionReference;

@interface _OSLogVersioning : NSObject

{
    _OSLogCollectionReference *_lcr;
    _Bool _closeOnRelease;
    _Bool _hasEndTimeRef;
    long long _state;
    long long _version;
}

@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) _Bool hasEndTimeRef;
@property (nonatomic, readonly) long long version;

- (void)dealloc;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (_Bool)performDestructiveUpdates:(id *)arg1;
- (id)initWithCollection:(id)arg1 error:(id *)arg2;
- (id)initWithCollection:(id)arg1 closeOnRelease:(_Bool)arg2 error:(id *)arg3;
- (_Bool)checkTimesyncDB:(_Bool *)arg1 error:(id *)arg2;
- (_Bool)repairTimesyncDB:(id *)arg1;

@end
