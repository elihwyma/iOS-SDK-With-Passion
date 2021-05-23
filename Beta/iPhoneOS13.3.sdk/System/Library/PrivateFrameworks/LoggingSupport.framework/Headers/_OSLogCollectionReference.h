/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class _OSLogDirectoryReference;

__attribute__((visibility("hidden")))
@interface _OSLogCollectionReference : NSObject

{
    _OSLogDirectoryReference *_diagnosticsDirectoryReference;
    _OSLogDirectoryReference *_timesyncReference;
    _OSLogDirectoryReference *_UUIDTextReference;
}

@property (nonatomic, readonly) _OSLogDirectoryReference *diagnosticsDirectoryReference;
@property (nonatomic, readonly) _OSLogDirectoryReference *timesyncReference;
@property (nonatomic, readonly) _OSLogDirectoryReference *UUIDTextReference;

+ (id)referenceWithURL:(id)arg1 error:(id *)arg2;
+ (id)localDBRefWithError:(id *)arg1;

- (void)close;
- (id)initWithDiagnosticsDirectory:(id)arg1 timesyncDirectory:(id)arg2 UUIDTextDirectory:(id)arg3;

@end
