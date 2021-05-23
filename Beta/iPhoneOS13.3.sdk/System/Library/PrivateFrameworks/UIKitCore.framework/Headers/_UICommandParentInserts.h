/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UICommandParentInserts : NSObject

{
    NSMutableDictionary *_childInserts;
    NSMutableArray *_fallbackBeforeElements;
    NSMutableArray *_fallbackAfterElements;
    NSArray *_atStartElements;
    NSArray *_atEndElements;
}

@property (nonatomic, readonly) NSArray *atStartElements;
@property (nonatomic, readonly) NSArray *atEndElements;
@property (nonatomic, readonly) NSDictionary *childInserts;
@property (nonatomic, readonly) NSArray *fallbackBeforeElements;
@property (nonatomic, readonly) NSArray *fallbackAfterElements;

- (void)_setAtStartElements:(id)arg1 atEndElements:(id)arg2;
- (void)_setBeforeElements:(id)arg1 afterElements:(id)arg2 aroundElement:(id)arg3;
- (void)_addFallbackBeforeElements:(id)arg1 fallbackAfterElements:(id)arg2;

@end
