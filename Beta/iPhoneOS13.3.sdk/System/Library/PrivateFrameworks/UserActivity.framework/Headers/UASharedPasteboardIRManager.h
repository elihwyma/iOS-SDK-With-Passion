/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UASharedPasteboardIRManager : NSObject

{
    NSMutableDictionary *_lookupTable;
}

@property (retain) NSMutableDictionary *lookupTable;

+ (id)sharedIRManager;

- (id)init;
- (void)registerIRHandlerClass:(Class)arg1 forType:(id)arg2;
- (id)converterForType:(id)arg1;
- (void)initializeConverters;
- (id)registeredConverters;

@end
