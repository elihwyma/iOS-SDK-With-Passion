/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SCROMobileBrailleDisplayInputManagerCacheObject : NSObject

{
    NSString *_driverIdentifier;
    NSString *_modelIdentifier;
    int _brailleInputMode;
    NSMutableDictionary *_commandDictionary;
    NSMutableArray *_orderedIdentifiers;
    NSBundle *_bundle;
}

@property (retain, nonatomic) NSString *modelIdentifier;
@property (nonatomic) int brailleInputMode;
@property (retain, nonatomic) NSString *driverIdentifier;
@property (retain, nonatomic) NSMutableDictionary *commandDictionary;
@property (retain, nonatomic) NSMutableArray *orderedIdentifiers;
@property (retain, nonatomic) NSBundle *bundle;

@end
