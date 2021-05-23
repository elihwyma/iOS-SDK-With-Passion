/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class NSString;

@protocol _SiriUICardLoaderDelegate;

@interface _SiriUICardLoader : NSObject

{
    _Bool _active;
    id <_SiriUICardLoaderDelegate> _delegate;
}

@property (weak, nonatomic) id <_SiriUICardLoaderDelegate> delegate;
@property (nonatomic) _Bool active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)loadCard:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_registerWithSearchFoundation;
- (void)_unregisterWithSearchFoundaton;

@end
