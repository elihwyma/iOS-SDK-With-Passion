/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UISystemNavigationAction;

__attribute__((visibility("hidden")))
@interface UIStatusBarComposedData : NSObject <Swift>

{
    CDStruct_0942cde0 _rawData;
    _Bool _itemEnabled[48];
    NSString *_doubleHeightStatus;
    UISystemNavigationAction *_systemNavigationItem;
}

@property (nonatomic, readonly) CDStruct_0942cde0 *rawData;
@property (copy, nonatomic) NSString *doubleHeightStatus;
@property (retain, nonatomic) UISystemNavigationAction *systemNavigationItem;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRawData:(const CDStruct_0942cde0 *)arg1;
- (void)setItem:(int)arg1 enabled:(_Bool)arg2;
- (_Bool)isItemEnabled:(int)arg1;

@end
