/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSString;

@interface TMLBlockSignalHandler : NSObject

{
    CDUnknownBlockType _block;
    int _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)detach;
- (void)attach;
- (id)callWithArguments:(id)arg1;

@end
