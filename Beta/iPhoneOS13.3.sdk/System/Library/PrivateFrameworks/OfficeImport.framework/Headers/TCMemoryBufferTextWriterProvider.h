/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/TCXmlTextWriterProvider.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface TCMemoryBufferTextWriterProvider : TCXmlTextWriterProvider

{
    NSMutableData *_memoryBuffer;
}

@property (retain, nonatomic, readonly) NSMutableData *memoryBuffer;

- (_Bool)setUp;
- (id)initWithMemoryBuffer:(id)arg1;

@end
