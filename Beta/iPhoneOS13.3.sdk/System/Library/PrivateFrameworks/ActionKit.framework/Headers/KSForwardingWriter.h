/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol KSWriter;

@interface KSForwardingWriter : NSObject

{
    id <KSWriter> _writer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)close;
- (void)writeString:(id)arg1;
- (id)initWithOutputWriter:(id)arg1;

@end
