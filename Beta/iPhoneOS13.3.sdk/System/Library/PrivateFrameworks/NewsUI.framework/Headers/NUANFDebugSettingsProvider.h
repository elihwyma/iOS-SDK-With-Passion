/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NUANFDebugSettingsProvider : NSObject

{
    _Bool _viewportDebuggingEnabled;
    _Bool _testingConditionEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool viewportDebuggingEnabled;
@property (nonatomic, readonly) _Bool testingConditionEnabled;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
