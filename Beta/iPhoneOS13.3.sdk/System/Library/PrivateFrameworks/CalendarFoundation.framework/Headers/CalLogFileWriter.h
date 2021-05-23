/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <CalendarFoundation/CalLogWriter.h>

@class NSString;

@interface CalLogFileWriter : CalLogWriter

{
    NSString *_path;
    int _fileDescriptor;
    _Bool _fileDescriptorIsValid;
}

@property (retain, nonatomic) NSString *path;
@property (nonatomic) int fileDescriptor;
@property (nonatomic) _Bool fileDescriptorIsValid;

- (void)dealloc;
- (id)description;
- (id)initWithParameters:(id)arg1;
- (void)write:(id)arg1;

@end
