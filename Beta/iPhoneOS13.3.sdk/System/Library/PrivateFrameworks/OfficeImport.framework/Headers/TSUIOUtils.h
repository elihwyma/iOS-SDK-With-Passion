/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUIOUtils : NSObject

+ (struct CGDataProvider *)newCGDataProviderForInputStream:(id)arg1;
+ (void)readAllFromChannel:(id)arg1 offset:(long long)arg2 length:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (struct CGDataProvider *)newCGDataProviderForReadChannel:(id)arg1;

@end
