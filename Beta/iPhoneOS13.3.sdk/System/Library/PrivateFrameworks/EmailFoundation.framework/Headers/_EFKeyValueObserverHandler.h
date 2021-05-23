/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

#import <EmailFoundation/Swift-Protocol.h>

@class NSString;

@interface _EFKeyValueObserverHandler : NSObject <Swift>

{
    id _object;
    NSString *_keyPath;
    CDUnknownBlockType _block;
    _Bool _observing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startObservingWithOptions:(unsigned long long)arg1;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end
