/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TCXmlTextWriterProvider : NSObject

{
    struct _xmlTextWriter *_textWriter;
}

@property (nonatomic, readonly) struct _xmlTextWriter *textWriter;

- (void)dealloc;
- (_Bool)tearDown;
- (_Bool)setUp;
- (_Bool)setUpWithTextWriter:(struct _xmlTextWriter *)arg1;

@end
