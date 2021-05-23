/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TIAssetsForInputMode : NSObject

{
    NSMutableDictionary *_assetsByInputModeLevel;
    NSString *_inputMode;
}

@property (nonatomic, readonly) NSString *inputMode;

- (void)dealloc;
- (id)recursiveDescription;
- (id)initWithInputMode:(id)arg1;
- (id)assetContentItemsMatching:(id)arg1;
- (void)addAssetsForInputModeLevel:(id)arg1;
- (void)removeAllInputModeLevels;

@end
