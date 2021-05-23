/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

#import <ScreenReaderOutput/Swift-Protocol.h>

@class NSString;

@interface SCROIOElement : NSObject <Swift>

{
    unsigned int _ioObject;
    int _identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)identifier;
- (int)transport;
- (id)initWithIOObject:(unsigned int)arg1;
- (unsigned int)ioObject;

@end
