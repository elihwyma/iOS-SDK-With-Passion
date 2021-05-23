/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/TCXmlTextWriterProvider.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCFileTextWriterProvider : TCXmlTextWriterProvider

{
    NSString *_filePath;
}

@property (copy, nonatomic, readonly) NSString *filePath;

- (id)initWithFilePath:(id)arg1;
- (_Bool)setUp;

@end
