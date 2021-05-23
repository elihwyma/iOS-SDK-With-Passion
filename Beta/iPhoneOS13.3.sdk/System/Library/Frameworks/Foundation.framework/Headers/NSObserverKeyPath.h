/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSBoundKeyPath.h>

#import <Foundation/Swift-Protocol.h>

@class NSString;

@interface NSObserverKeyPath : NSBoundKeyPath <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_receiveBox:(id)arg1;
- (void)finishObserving;
- (void)setObservation:(id)arg1;

@end
