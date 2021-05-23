/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol PSITableDelegate;

@interface PSITable : NSObject

{
    _Bool _finalizzeWasCalled;
    id <PSITableDelegate> _delegate;
}

@property (weak, readonly) id <PSITableDelegate> delegate;

- (void)dealloc;
- (void)clear;
- (void)finalizze;
- (id)initWithDelegate:(id)arg1 searchable:(_Bool)arg2 writable:(_Bool)arg3;

@end
