/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface PSUICellularUsageContentSpecifiers : NSObject

{
    NSArray *_leadingContentSpecifiers;
    NSMutableArray *_appSpecifiers;
    NSArray *_trailingContentSpecifiers;
}

@property (retain, nonatomic) NSArray *leadingContentSpecifiers;
@property (retain, nonatomic) NSMutableArray *appSpecifiers;
@property (retain, nonatomic) NSArray *trailingContentSpecifiers;

- (id)specifiers;

@end
