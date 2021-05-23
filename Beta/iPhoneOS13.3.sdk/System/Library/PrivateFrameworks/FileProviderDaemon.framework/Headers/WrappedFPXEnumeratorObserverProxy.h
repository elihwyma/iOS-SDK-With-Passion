/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FPXEnumeratorObserver;

__attribute__((visibility("hidden")))
@interface WrappedFPXEnumeratorObserverProxy : NSObject

{
    id <FPXEnumeratorObserver> _target;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithTarget:(id)arg1;
- (void)enumerationResultsDidChange;
- (void)didUpdateItem:(id)arg1;

@end
