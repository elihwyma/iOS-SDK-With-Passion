/*
 Image: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
 */

#import <Foundation/NSObject.h>

@class LiveFSFPExtensionHelper, LiveFSFPItemHelper, NSString;

@interface LiveFSFPClusterEnumeratorHelper : NSObject

{
    LiveFSFPExtensionHelper *ext;
    _Bool _isDir;
    int _state;
    LiveFSFPItemHelper *_enumeratedItem;
}

@property (readonly) _Bool isDir;
@property int state;
@property (nonatomic, readonly) LiveFSFPItemHelper *enumeratedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newWithEnumeratedItem:(id)arg1 extension:(id)arg2 error:(id *)arg3;

- (void)invalidate;
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
- (void)doShutdown;
- (id)initWithEnumeratedItem:(id)arg1 extension:(id)arg2 error:(id *)arg3;

@end
