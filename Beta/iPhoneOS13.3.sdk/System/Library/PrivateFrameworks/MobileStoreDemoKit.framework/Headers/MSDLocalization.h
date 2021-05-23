/*
 Image: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface MSDLocalization : NSObject

{
    NSDictionary *_localizationTable;
}

@property (retain, nonatomic) NSDictionary *localizationTable;

+ (id)sharedInstance;
+ (id)getLocalizedOwnershipWarnings;

- (id)init;
- (id)localizedStringWithKey:(id)arg1 defaultString:(id)arg2;

@end
