/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <ScreenReaderOutput/SCROIOElement.h>

@class NSString;

@interface SCROIOSerialElement : SCROIOElement

{
    int _fileDescriptor;
}

@property (nonatomic) int fileDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (int)identifier;
- (id)initWithFileDescriptor:(int)arg1;
- (int)transport;

@end
